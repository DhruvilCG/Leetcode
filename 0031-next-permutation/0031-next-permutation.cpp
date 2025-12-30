class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() ;
        int temp1 = -1 ;

        for (int i = n-1 ; i > 0 ; i--) {
            if (nums[i-1] < nums[i]) {
                temp1 = i-1 ;
                break ;
            } 
        }

        if (temp1 == -1) {
            reverse(nums.begin(), nums.end());
            return ;
        }

        int big = temp1 ;

        for (int i = n-1 ; i > temp1 ; i--) {
            if (nums[i] > nums[temp1]) {
                big = i ;
                break ;
            }
        }

        swap(nums[temp1] , nums[big]) ;

        reverse(nums.begin() + temp1 + 1, nums.end());
    }
};