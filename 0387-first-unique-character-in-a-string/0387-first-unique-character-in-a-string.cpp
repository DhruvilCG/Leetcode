class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map<char , int> M;
        // for (int i = 0 ; i < s.size() ; i++) {
        //     M[s[i]]++;
        // }

        // for (int i = 0 ; i < s.size() ; i++) {
        //     if (M[s[i]] == 1) {
        //         return i;
        //     }
        // }
        // return -1;


        



        int freq[26] = {0};

        for (int i = 0 ; i < s.size() ; i++) {
            freq[s[i] - 'a']++;
        }

        for (int i = 0 ; i < s.size() ; i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};