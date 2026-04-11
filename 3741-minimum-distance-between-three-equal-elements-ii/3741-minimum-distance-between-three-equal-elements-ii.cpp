class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> appears;

        for (int i = 0; i < nums.size(); i++) {
            appears[nums[i]].push_back(i);
        }

        int minDist = INT_MAX;
        for (int i = 0; i < appears.size(); i++) {
            if (appears[i].size() < 3) {
                continue;
            }

            for (int j = 0; j + 2 < appears[i].size(); j++) {
                int currDist = abs(appears[i][j + 1] - appears[i][j]);
                currDist += abs(appears[i][j + 2] - appears[i][j + 1]);
                currDist += abs(appears[i][j + 2] - appears[i][j]);

                minDist = min(minDist, currDist);
            }
        }

        if (minDist == INT_MAX) {
            return -1;
        }
        return minDist;
    }
};