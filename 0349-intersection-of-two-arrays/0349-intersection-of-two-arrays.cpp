class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = {} ;
        unordered_map<int , int> m1 ;

        for (int i = 0 ; i < nums1.size() ; i++) {
            m1[nums1[i]]++ ;
        }

        for (int i = 0 ; i < nums2.size() ; i++) {
            if (m1.find(nums2[i]) != m1.end() && m1[nums2[i]] != 0) {
                ans.push_back(nums2[i]) ;
                m1[nums2[i]] = 0 ;
            }
        }

        return ans ;
    }
};