class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // unordered_set<int> s;
        // for (int i = 0; i < nums.size(); i++) {
        //     s.insert(nums[i]);
        // }

        // for (int i = 1; i <= nums.size(); i++) {
        //     if (s.find(i) == s.end()) {
        //         return i;
        //     }
        // }

        // return nums.size()+1;



        for (int i = 0 ; i < nums.size() ; i++) {
            while (true) {
                if (nums[i] <= 0 || nums[i] > nums.size()) {
                    break;
                }
                int val = nums[i];
                if (val == i+1) {
                    break;
                }
                int correctIdx = val-1;
                if (nums[correctIdx] == val) {
                    break;
                }

                swap(nums[i] , nums[correctIdx]);
            }
        }

        for (int i = 0 ; i < nums.size() ; i++) {
            if (nums[i] != i+1) {
                return i+1;
            }
        }

        return nums.size()+1;
    }
};