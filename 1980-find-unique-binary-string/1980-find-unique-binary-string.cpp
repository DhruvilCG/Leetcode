class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int> s;
        for (int i = 0 ; i < nums.size() ; i++) {
            s.insert(stoi(nums[i] , 0 , 2));
        }

        string binary = "";
        for (int i = 0 ; i < (1 << nums[0].size()) ; i++) {
            if (s.find(i) == s.end()) {
                binary = (bitset<16> (i)).to_string();
                break;
            }
        }

        return binary.substr(16-nums[0].size() , nums[0].size());
    }
};