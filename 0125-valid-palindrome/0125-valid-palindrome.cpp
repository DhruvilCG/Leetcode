class Solution {
public:
    bool isPalindrome(string s) {
        // string test = "";
        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] != 0 && ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))) {
        //         test += tolower(s[i]);
        //     }
        // }

        // for (int i = 0 ; i < test.size()/2 ; i++) {
        //     if (test[i] != test[test.size()-1-i]) {
        //         return false;
        //     }
        // }
        // return true ;
        
        
        
        

        int st = 0;
        int end = s.size() - 1;

        while (st < end) {

            while (st < end &&
                  !((s[st] >= 'A' && s[st] <= 'Z') ||
                    (s[st] >= 'a' && s[st] <= 'z') ||
                    (s[st] >= '0' && s[st] <= '9'))) {
                st++;
            }

            while (st < end &&
                  !((s[end] >= 'A' && s[end] <= 'Z') ||
                    (s[end] >= 'a' && s[end] <= 'z') ||
                    (s[end] >= '0' && s[end] <= '9'))) {
                end--;
            }

            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++;
            end--;
        }

        return true;

    }
};