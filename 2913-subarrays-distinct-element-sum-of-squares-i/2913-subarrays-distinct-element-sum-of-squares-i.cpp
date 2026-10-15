class Solution {
public:
    int sumCounts(vector<int>& nums) {
        unordered_set<int> us;
        int ans = 0;
        for (int i = 0 ; i < nums.size() ; i++) {
            for (int j = i ; j < nums.size() ; j++) {
                us.insert(nums[j]);
                ans += (us.size()*us.size());
            }
            us.clear();
        }

        return ans;
    }
};