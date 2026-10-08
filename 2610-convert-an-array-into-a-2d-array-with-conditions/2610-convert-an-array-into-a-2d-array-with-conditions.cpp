class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        unordered_set<int> us;
        while (!nums.empty()) {
            for (int i = 0 ; i < nums.size() ; i++) {
                if (us.contains(nums[i])) {
                    temp.push_back(nums[i]);
                } 
                us.insert(nums[i]);
            }
            ans.push_back(vector<int>(us.begin() , us.end()));
            us.clear();
            nums = temp;
            temp.clear();
        }

        return ans;
    }
};