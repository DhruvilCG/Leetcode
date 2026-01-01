class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s1 ;
        vector<int> ans ;

        for (int i = 0 ; i < nums.size() ; i++) {
            s1.insert(nums[i]) ;
        } 
        for (int i = 1 ; i <= nums.size() ; i++) {
            if (s1.find(i) == s1.end()) {
                ans.push_back(i) ;
                continue ;
            }
        }

        return ans ;
    }
};