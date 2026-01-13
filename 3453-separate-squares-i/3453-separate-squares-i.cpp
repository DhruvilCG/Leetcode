class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double low = 1e9, high = -1e9;

        for (auto& s : squares) {
            low = min(low, (double)s[1]);
            high = max(high, (double)(s[1] + s[2]));
        }

        auto areaDiff = [&](double y) {
            double above = 0, below = 0;

            for (auto& s : squares) {
                double bottom = s[1];
                double top = s[1] + s[2];
                double side = s[2];

                if (y <= bottom) {
                    above += side * side;
                } else if (y >= top) {
                    below += side * side;
                } else {
                    above += (top - y) * side;
                    below += (y - bottom) * side;
                }
            }
            return above - below;
        };

        for (int i = 0; i < 60; i++) {
            double mid = (low + high) / 2;
            if (areaDiff(mid) > 0)
                low = mid;
            else
                high = mid;
        }

        return low;
    }
};
