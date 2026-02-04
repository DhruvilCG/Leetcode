class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
        int n = nums.size();

        int i = 1;
        long long maxSum = LLONG_MIN;

        while (i < n) {
            int start = i - 1;
            long long sum = nums[i - 1];

            while (i < n && nums[i] > nums[i - 1]) {
                sum += nums[i];
                i++;
            }

            if (i == start + 1) {
                i++;
                continue;
            }

            int peak = i - 1;

            while (i < n && nums[i] < nums[i - 1]) {
                sum += nums[i];
                i++;
            }

            if (i == peak + 1) {
                i++;
                continue;
            }

            int valley = i - 1;

            while (i < n && nums[i] > nums[i - 1]) {
                sum += nums[i];
                maxSum = max(maxSum, sum);

                long long currSum = sum;
                for (int j = start; j <= peak - 2; j++) {
                    currSum -= nums[j];
                    maxSum = max(maxSum, currSum);
                }

                i++;
            }

            if (i == valley + 1) {
                i++;
            } else {
                i = valley;
            }
        }

        return maxSum;
    }
};
