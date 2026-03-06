class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> s;
        for (int i = 0 ; i < nums.size() ; i++) {
            s.insert(nums[i]);
        }

        for (int i = 0 ; i < nums.size() ; i++) {
            int num = 0;
            while (nums[i] > 0) {
                num = num*10 + nums[i]%10;
                nums[i] /= 10;
            }
            s.insert(num);
        }

        return s.size();
    }
};