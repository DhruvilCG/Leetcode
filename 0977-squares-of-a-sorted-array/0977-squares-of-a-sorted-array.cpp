class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // map<int,int> m;
        // for (int i = 0 ; i < nums.size() ; i++) {
        //     m[nums[i]*nums[i]]++;
        // }
        // nums = {};
        // for (auto num : m){
        //     while (num.second != 0) {
        //         nums.push_back(num.first);
        //         num.second--;
        //     }
        // }

        // return nums;





        // for (int i = 0 ; i < nums.size() ; i++) {
        //     nums[i] *= nums[i];
        // }
        // sort (nums.begin() , nums.end());
        // return nums;




        // Optimized app
        int left = 0 , right = nums.size()-1 , pos = nums.size()-1;
        vector<int> ans(nums.size());
        while (left <= right) {
            if (nums[left]*nums[left] > nums[right]*nums[right]) {
                ans[pos] = nums[left]*nums[left];
                left++;
            } else {
                ans[pos] = nums[right]*nums[right];
                right--;
            }

            pos--;
        }

        return ans;
    }
};