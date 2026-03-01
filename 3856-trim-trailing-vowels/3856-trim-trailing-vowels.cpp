class Solution {
public:
    string trimTrailingVowels(string s) {
        int endIdx = -1;

        for (int i = s.size()-1 ; i >= 0 ; i--) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                continue;
            } else {
                endIdx = i;
                break;
            }
        }

        return s.substr(0 , endIdx+1);
    }
};