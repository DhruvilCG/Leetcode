class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> s;
        vector<int> ans(2);
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end()) {
                ans[0] = nums[i];
            } else {
                s.insert(nums[i]);
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (s.find(i + 1) == s.end()) {
                ans[1] = i + 1;
                break;
            }
        }

        return ans;
    }
};