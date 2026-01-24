class Solution {
public:
    int minPairSum(vector<int>& nums) {
        // sort(nums.begin() , nums.end());
        // int maxSum1 = INT_MIN;
        // int maxSum2 = nums[0]+nums[nums.size()-1];
        // int maxSum3 = INT_MIN;

        // for (int i = 0 ; i < nums.size()-1 ; i=i+2) {
        //     maxSum1 = max(nums[i]+nums[i+1] , maxSum1);
        // }
        
        // for (int i = 1 ; i < nums.size()-1 ; i=i+2) {
        //     maxSum2 = max(nums[i]+nums[i+1] , maxSum2);
        // }
        
        // for (int i = 0 ; i < nums.size()/2 ; i++) {
        //     maxSum3 = max(nums[i]+nums[nums.size()-i-1] , maxSum3);
        // }

        // int min1 = min(maxSum1 , maxSum2);
        // return min(min1 , maxSum3);



        sort(nums.begin() , nums.end());
        int ans = INT_MIN;
        
        for (int i = 0 ; i < nums.size()/2 ; i++) {
            ans = max(nums[i]+nums[nums.size()-i-1] , ans);
        }

        return ans;
    }
};