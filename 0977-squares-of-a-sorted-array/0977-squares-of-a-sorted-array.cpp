class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int,int> m;
        for (int i = 0 ; i < nums.size() ; i++) {
            m[nums[i]*nums[i]]++;
        }
        nums = {};
        for (auto num : m){
            while (num.second != 0) {
                nums.push_back(num.first);
                num.second--;
            }
        }

        return nums;
    }
};