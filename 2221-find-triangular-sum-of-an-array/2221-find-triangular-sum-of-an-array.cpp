class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> vec = nums;
        vector<int> ans = nums;

        while (vec.size() > 1) {
            ans.clear();
            for (int i = 0 ; i < vec.size()-1 ; i++) {
                ans.push_back((vec[i] + vec[i+1])%10);
            }
            vec = ans;
        }

        return ans[0];
    }
};