class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> nums;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                nums.pop_back();
            } else if (operations[i] == "D") {
                nums.push_back(nums[nums.size() - 1] * 2);
            } else if (operations[i] == "+") {
                nums.push_back(nums[nums.size() - 1] + nums[nums.size() - 2]);
            } else {
                nums.push_back(stoi(operations[i]));
            }
        }

        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans += nums[i];
        }

        return ans;
    }
};