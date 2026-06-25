class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int ctn = 0, size = 1;
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] == target) {
                    ctn++;
                }
                if (ctn > size / 2) {
                    ans++;
                }
                size++;
            }
        }

        return ans;
    }
};