class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int operans = 0;

        while(!is_sorted(nums.begin() , nums.end())) {
            int minSum = INT_MAX;
            int idx;
            for (int i = 0 ; i < nums.size()-1 ; i++) {
                if (minSum > nums[i]+nums[i+1]) {
                    minSum = nums[i]+nums[i+1];
                    idx = i;
                }
            }

            nums[idx] += nums[idx+1];
            nums.erase(nums.begin()+idx+1);
            operans++;
        }

        return operans;
    }
};
