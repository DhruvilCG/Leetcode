class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxElm = INT_MIN;
        for (int i = 0; i < candies.size(); i++) {
            maxElm = max(candies[i], maxElm);
        }

        vector<bool> ans(candies.size());
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxElm) {
                ans[i] = true;
            } else {
                ans[i] = false;
            }
        }

        return ans;
    }
};