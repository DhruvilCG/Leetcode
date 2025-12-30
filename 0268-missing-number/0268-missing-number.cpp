class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0 , n = nums.size() ;
        int  expSum = n ;
        for (int i = 0 ; i < n ; i++) {
            expSum = expSum+i ;
            sum = sum+nums[i] ;
        }

        return expSum-sum ;
    }
};