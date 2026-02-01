class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // vector<int> ans;
        // for (int i = 0 ; i < nums.size() ; i++) {
        //     int count = 0;
        //     for (int j = 0 ; j < nums.size() ; j++) {
        //         if (nums[i] > nums[j]) {
        //             count++;
        //         }
        //     }
        //     ans.push_back(count);
        // }

        // return ans;





        vector<int> count (101 , 0);
        vector<int> ans;

        for (int i = 0 ; i < nums.size() ; i++) {
            count[nums[i]]++;
        }

        for (int i = 0 ; i < nums.size() ; i++) {
            int small = 0;
            for (int j = 0 ; j < count.size() ; j++) {
                if (j == nums[i]) {
                    break;
                }
                small += count[j];
            }
            ans.push_back(small);
        }

        return ans;
    }
};