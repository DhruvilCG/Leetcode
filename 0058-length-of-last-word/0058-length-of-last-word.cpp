class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(s.find_last_not_of(' ')+1);
        int idx = -1 ;
        for (int i = s.size()-1 ; i >= 0 ; i--) {
            if (s[i] == 32) {
                idx = i;
                break;
            }
        }

        return s.size()-idx-1;
    }
};