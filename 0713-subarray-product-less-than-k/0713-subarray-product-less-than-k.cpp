class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int len = 0;
        for (int i = 0; i < nums.size(); i++) {
            int product = nums[i];
            if (product < k) {
                len++;
            }
            for (int j = i + 1; j < nums.size(); j++) {
                product *= nums[j];

                if (product < k) {
                    len++;
                } else {
                    break;
                }
            }
        }

        return len;
    }
};