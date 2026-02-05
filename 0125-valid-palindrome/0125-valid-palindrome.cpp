class Solution {
public:
    bool isPalindrome(string s) {
        string test = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != 0 && ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))) {
                test += tolower(s[i]);
            }
        }

        for (int i = 0 ; i < test.size()/2 ; i++) {
            if (test[i] != test[test.size()-1-i]) {
                return false;
            }
        }
        return true ;
    }
};