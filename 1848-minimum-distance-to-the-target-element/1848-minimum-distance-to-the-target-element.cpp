class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int idx = INT_MAX;
        for (int i = start; i < nums.size(); i++) {
            if (nums[i] == target) {
                idx = i;
                break;
            }
        }

        for (int i = start - 1; i >= 0; i--) {
            if (nums[i] == target) {
                if (abs(start - idx) > abs(start - i)) {
                    idx = i;
                }
                break;
            }
        }

        return abs(start - idx);
    }
};