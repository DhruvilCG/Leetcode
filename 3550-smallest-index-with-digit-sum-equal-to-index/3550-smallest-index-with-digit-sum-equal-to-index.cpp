class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum = 0 , num = 0;
        for (int i = 0 ; i < nums.size() ; i++) {
            sum = 0;
            num = nums[i];
            while (num > 0) {
                sum += num%10;
                num /= 10;
            }

            if (sum == i) {
                return i;
            }
        }

        return -1;
    }
};