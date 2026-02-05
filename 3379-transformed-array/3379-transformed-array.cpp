class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> ans ;
        int n = nums.size();
        for (int i = 0 ; i < nums.size() ; i++) {
            int idx = ((i+nums[i])%n + n)%n;
            ans.push_back(nums[idx]);
        }

        return ans;
    }
};