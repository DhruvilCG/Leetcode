class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for (int i = 0 ; i < nums.size() ; i++) {
            int num = nums[i];
            while (num > 0) {
                int lstDigit = num%10 ;
                if (lstDigit == digit) {
                    count++;
                }
                num /= 10;
            }
        }

        return count;
    }
};