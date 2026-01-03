class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> ans = {} ;
        // unordered_map<int , int> m1 ;

        // for (int i = 0 ; i < nums1.size() ; i++) {
        //     m1[nums1[i]]++ ;
        // }

        // for (int i = 0 ; i < nums2.size() ; i++) {
        //     if (m1.find(nums2[i]) != m1.end() && m1[nums2[i]] != 0) {
        //         ans.push_back(nums2[i]) ;
        //         m1[nums2[i]] = 0 ;
        //     }
        // }

        // return ans ;


        // vector<int> ans = {} ;
        // unordered_set<int> s1 ;
        // unordered_set<int> s2 ;

        // for (int i = 0 ; i < nums1.size() ; i++) {
        //     s1.insert(nums1[i]) ;
        // }
        // for (int i = 0 ; i < nums2.size() ; i++) {
        //     s2.insert(nums2[i]) ;
        // }

        // for (int num: s1) {
        //     if (s2.find(num) != s2.end()) {
        //         ans.push_back(num) ;
        //     }
        // }

        // return ans ;




        
        vector<int> ans = {} ;
        unordered_set<int> s ;

        for (int i = 0 ; i < nums1.size() ; i++) {
            s.insert(nums1[i]) ;
        }

        for (int i = 0 ; i < nums2.size() ; i++) {
            if (s.find(nums2[i]) != s.end()) {
                ans.push_back(nums2[i]) ;
                s.erase(nums2[i]) ;
            }
        }

        return ans ;
    }
};