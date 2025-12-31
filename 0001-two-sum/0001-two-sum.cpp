class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int,int>map;

        // for (int i = 0 ; i < nums.size() ; i++) {
        //     int remain = target-nums[i] ;

        //     if (map.count(remain)) {
        //         return {map[remain] , i} ;
        //     }

        //     map[nums[i]] = i ;
        // }

        // return {} ;



        unordered_map <int,int> map ;

        for (int i = 0 ; i < nums.size() ; i++) {
            int first = nums[i] ;
            int second = target-first ;

            if (map.find(second) != map.end()) {
                return {i , map[second]} ;
            }
            map[first] = i ;
        }

        return {} ;
    }
};