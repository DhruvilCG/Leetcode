class Solution {
public:
    bool checkOnesSegment(string s) {
        bool gotZero = false;
        for (int i = 0 ; i < s.size() ; i++) {
            if (s[i] == '0') {
                gotZero = true;
            }
            if (gotZero && s[i] == '1') {
                return false;
            }
        }

        return true;
    }
};