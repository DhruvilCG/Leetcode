class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int nonZeroIndex = 0;  
        
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] != 0) {
        //         int temp = nums[i];
        //         nums[i] = nums[nonZeroIndex];
        //         nums[nonZeroIndex] = temp;
                
        //         nonZeroIndex++; 
        //     }
        // }

        int idx = 0;
        for (int i = 0 ; i < nums.size() ; i++) {
            if (nums[i] != 0) {
                nums[idx] = nums[i];
                idx++;
            }
        }
        for (int i = idx ; i < nums.size() ; i++) {
            nums[i] = 0;
        }
    }
};
