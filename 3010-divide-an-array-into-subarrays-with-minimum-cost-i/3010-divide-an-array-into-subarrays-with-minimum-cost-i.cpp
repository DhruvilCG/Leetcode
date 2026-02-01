class Solution {
public:
    int minimumCost(vector<int>& nums) {
        // sort(nums.begin()+1 , nums.end());

        // int sum = 0;
        // for (int i = 0 ; i < 3 ; i++) {
        //     sum += nums[i];
        // }

        // return sum;





        sort(nums.begin()+1 , nums.end());
        return nums[0]+nums[1]+nums[2];






        // int one = INT_MAX , two = INT_MAX;
        // for (int i = 1 ; i < nums.size() ; i++) {
        //     if (one > nums[i]) {
        //         two = one;
        //         one = nums[i]; 
        //     } else if (two > nums[i]) {
        //         two = nums[i];
        //     }
        // }

        // return one+two+nums[0];
    }
};