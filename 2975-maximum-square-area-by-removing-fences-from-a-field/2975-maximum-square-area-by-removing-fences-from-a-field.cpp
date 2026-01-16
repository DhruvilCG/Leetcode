class Solution {
public:
    int maximizeSquareArea(int m, int n,
                           vector<int>& hFences,
                           vector<int>& vFences) {
        const int MOD = 1e9 + 7;

        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);

        sort(hFences.begin(), hFences.end());
        sort(vFences.begin(), vFences.end());

        unordered_set<int> heights;
        for (int i = 0; i < hFences.size(); i++) {
            for (int j = i + 1; j < hFences.size(); j++) {
                heights.insert(hFences[j] - hFences[i]);
            }
        }

        long long ans = 0;
        for (int i = 0; i < vFences.size(); i++) {
            for (int j = i + 1; j < vFences.size(); j++) {
                int w = vFences[j] - vFences[i];
                if (heights.count(w)) {
                    ans = max(ans, 1LL * w * w);
                }
            }
        }

        return ans == 0 ? -1 : ans % MOD;
    }
};
