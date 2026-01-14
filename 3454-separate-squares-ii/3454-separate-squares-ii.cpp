class Solution {
public:
    struct Event {
        double y, x1, x2;
        int type;
    };

    double separateSquares(vector<vector<int>>& squares) {
        vector<Event> events;

        for (auto &s : squares) {
            double x = s[0], y = s[1], l = s[2];
            events.push_back({y, x, x + l, +1});
            events.push_back({y + l, x, x + l, -1});
        }

        sort(events.begin(), events.end(),
             [](const Event& a, const Event& b) {
                 return a.y < b.y;
             });

        map<pair<double,double>, int> active;
        vector<double> ys;
        vector<double> areas;
        
        double prevY = events[0].y;
        double totalArea = 0;

        for (int i = 0; i < events.size(); ) {
            double currY = events[i].y;
            double height = currY - prevY;

            double width = 0;
            if (!active.empty()) {
                vector<pair<double,double>> intervals;
                for (auto &p : active)
                    if (p.second > 0) intervals.push_back(p.first);

                sort(intervals.begin(), intervals.end());

                double L = intervals[0].first;
                double R = intervals[0].second;
                for (int j = 1; j < intervals.size(); j++) {
                    if (intervals[j].first <= R)
                        R = max(R, intervals[j].second);
                    else {
                        width += R - L;
                        L = intervals[j].first;
                        R = intervals[j].second;
                    }
                }
                width += R - L;
            }

            if (height > 0) {
                double area = width * height;
                ys.push_back(prevY);
                areas.push_back(area);
                totalArea += area;
            }

            while (i < events.size() && events[i].y == currY) {
                auto key = make_pair(events[i].x1, events[i].x2);
                active[key] += events[i].type;
                if (active[key] == 0) active.erase(key);
                i++;
            }

            prevY = currY;
        }

        double half = totalArea / 2.0;
        double accumulated = 0;

        for (int i = 0; i < areas.size(); i++) {
            if (accumulated + areas[i] >= half) {
                double need = half - accumulated;
                double height = (i + 1 < ys.size() ? ys[i + 1] : prevY) - ys[i];
                if (areas[i] == 0) return ys[i];
                double width = areas[i] / height;
                return ys[i] + need / width;
            }
            accumulated += areas[i];
        }

        return prevY;
    }
};
