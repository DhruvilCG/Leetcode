class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int max = nums[0];
        int min = nums[0];
        int len = nums.size();
        for (int i = 1; i < len; i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
            if (nums[i] < min) {
                min = nums[i];
            }
        }

        return 1LL * (max - min) * k;
    }
};