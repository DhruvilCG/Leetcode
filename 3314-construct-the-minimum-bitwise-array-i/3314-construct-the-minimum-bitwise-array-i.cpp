class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size()) ;

        for (int i = 0 ; i < nums.size() ; i++) {
            for (int j = 0 ; j < nums[i] ; j++) {
                if ((j|(j+1)) == nums[i]) {
                    ans[i] = j ;
                    break;
                } else {
                    ans[i] = -1;
                }
            }
        }

        return ans;
    }
};