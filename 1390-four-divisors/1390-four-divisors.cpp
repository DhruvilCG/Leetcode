class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        int totalSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int count = 1;
            int sum = nums[i];
            for (int j = 1; j <= nums[i]/2; j++) {
                if (nums[i] % j == 0) {
                    count++;
                    sum += j;
                }

                if (count > 4) break;
            }
            if (count == 4) {
                totalSum += sum;
            }
        }

        return totalSum;
    }
};