class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m1;
        for (int i = 0; i < s.length(); i++) {
            m1[s[i]]++;
        }

        vector<pair<char, int>> v(m1.begin(), m1.end());
        sort(v.begin(), v.end(),
             [](auto& a, auto& b) { return a.second < b.second; });

        string ans = "";
        for (int i = v.size() - 1; i >= 0; i--) {
            for (int j = 0; j < v[i].second; j++) {
                ans += v[i].first;
            }
        }

        return ans ;
    }
};