class Solution {
public:
    char findTheDifference(string s, string t) {
    //     int len1 = s.length();
    //     int len2 = t.length();
    //     char temp[1];

    //     sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());

    //     if (len1 >= len2) {
    //         for (int i = 0; i < len1; i++) {
    //             if (t[i] == s[i]) {
    //                 continue;
    //             } else {
    //                 temp[0] = s[i];
    //                 break;
    //             }
    //         }
    //     } else {
    //         for (int i = 0; i < len2; i++) {
    //             if (t[i] == s[i]) {
    //                 continue;
    //             } else {
    //                 temp[0] = t[i];
    //                 break;
    //             }
    //         }
    //     }

    //     return temp[0];


    char ans = 0 ;

        for (int i = 0; i < s.length(); i++) {
            ans = ans ^ s[i];
        }

        for (int i = 0; i < t.length(); i++) {
            ans = ans ^ t[i];
        }

        return ans;

    }
};