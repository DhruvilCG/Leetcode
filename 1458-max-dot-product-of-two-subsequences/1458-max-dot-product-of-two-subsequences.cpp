class Solution {
public:
    int dp[501][501];

    int solve(int i, int j, vector<int>& a, vector<int>& b) {
        if (i == a.size() || j == b.size())
            return -1e9;  

        if (dp[i][j] != -1e9)
            return dp[i][j];

        int take = a[i] * b[j] + max(0, solve(i+1, j+1, a, b));
        int skipA = solve(i+1, j, a, b);
        int skipB = solve(i, j+1, a, b);

        return dp[i][j] = max({take, skipA, skipB});
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        for (int i = 0; i < 501; i++)
            for (int j = 0; j < 501; j++)
                dp[i][j] = -1e9;

        return solve(0, 0, nums1, nums2);
    }
};
