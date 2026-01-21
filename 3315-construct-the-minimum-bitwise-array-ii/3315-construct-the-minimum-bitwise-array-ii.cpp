class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans ;

        for (int i = 0 ; i < nums.size() ; i++) {
            if (nums[i] == 2) {
                ans.push_back(-1);
                continue;
            }

            bool found = false;
            for (int j = 1 ; j < 32 ; j++) {
                if ((nums[i] & (1 << j)) > 0) {
                    continue;
                }

                int x = (nums[i] ^ (1 << (j-1))) ;
                found = true;
                ans.push_back(x);
                break;
            }

            if (found == false) {
                ans.push_back(-1) ;
            }
        }

        return ans;
    }
};