class Solution {
public:
    int findGCD(vector<int>& nums) {
        // int min = nums[0] , max = nums[0];
        // for (int i = 0 ; i < nums.size() ; i++) {
        //     if (nums[i] > max) {
        //         max = nums[i];
        //     }
        //     if (nums[i] < min) {
        //         min = nums[i];
        //     } 
        // }

        // for (int i = min ; i > 0 ; i--) {
        //     if (min%i == 0 && max%i == 0) {
        //         return i;
        //     }
        // }

        // return 0;





        int min = nums[0] , max = nums[0];
        for (int i = 0 ; i < nums.size() ; i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
            if (nums[i] < min) {
                min = nums[i];
            } 
        }

        return gcd(min , max);
    }
};