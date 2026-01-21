class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //    k=k%nums.size();

    //    vector<int> ans ;


    //     for (int i = nums.size()-k ; i < nums.size() ; i++) {
    //         ans.push_back(nums[i]);
    //     }
    //     for (int i = 0 ; i < nums.size()-k ; i++) {
    //         ans.push_back(nums[i]);
    //     }

    //     for (int i = 0 ; i < nums.size() ; i++) {
    //         nums[i] = ans[i] ;
    //     }



        k=k%nums.size();

        reverse(nums.begin() , nums.end()) ;
        reverse(nums.begin() , nums.begin()+k) ;
        reverse(nums.begin()+k , nums.end()) ;

    }
};