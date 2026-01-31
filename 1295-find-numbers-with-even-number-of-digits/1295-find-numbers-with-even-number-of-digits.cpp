class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenNum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i], count = 0;
            while (num != 0) {
                count++;
                num /= 10;
            }
            if (count % 2 == 0) {
                evenNum++;
            }
        }

        return evenNum;
    }
};