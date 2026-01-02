class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // unordered_map <int,int> m1 ;
        // for (int i = 0 ; i < nums.size() ; i++) {
        //     m1[nums[i]]++ ;
        //     if (m1[nums[i]] == (nums.size()/2)) {
        //         return nums[i] ;
        //     }
        // }

        // return -1 ;


        unordered_set<int> s1 ;
        for (int i = 0 ; i < nums.size() ; i++) {
            if (s1.find(nums[i]) != s1.end()) {
                return nums[i] ;
            } else {
                s1.insert(nums[i]) ;
            }
        }
        return -1 ;
    }
};