class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;
        for (int i = 0 ; i < nums.size() ; i++) {
            int remove = 1 , ctn = 0;
            for (int j = i ; j < nums.size() ; j++) {
                if (nums[j] == 1) {
                    ctn++;
                } else if (remove == 1) {
                    remove = 0;
                    continue;
                } else {
                    break;
                }
            }
            ans = max(ans , ctn);
        }

        if (ans == nums.size()) {
            return ans-1;
        }
        return ans;
    }
};