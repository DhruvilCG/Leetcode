class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p = 0 , q = 0;
        for (int i = 0 ; i < nums.size()-1 ; i++) {
            if (nums[i] == nums[i+1]) {
                return false;
            }
            if (nums[i] > nums[i+1]) {
                p = i;
                break;
            }
        }
        if (p == nums.size()-1 || p == 0) {
            return false;
        }
        for (int i = p ; i < nums.size()-1 ; i++) {
            if (nums[i] == nums[i+1]) {
                return false;
            }
            if (nums[i] < nums[i+1]) {
                q = i;
                break;
            }
        }
        for (int i = q ; i < nums.size()-1 ; i++) {
            if (nums[i] == nums[i+1]) {
                return false;
            }
            if (nums[i] > nums[i+1]) {
                return false;
            }
        }

        if (q == nums.size()-1) {
            return false;
        }
        return true;
    }
};