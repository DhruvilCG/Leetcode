class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0;
        for (int i = 0; i < s.size() / 2; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                count++;
            }

            if (s[s.size() / 2 + i] == 'a' || s[s.size() / 2 + i] == 'e' ||
                s[s.size() / 2 + i] == 'i' || s[s.size() / 2 + i] == 'o' ||
                s[s.size() / 2 + i] == 'u' || s[s.size() / 2 + i] == 'A' ||
                s[s.size() / 2 + i] == 'E' || s[s.size() / 2 + i] == 'I' ||
                s[s.size() / 2 + i] == 'O' || s[s.size() / 2 + i] == 'U') {
                count--;
            }
        }

        if (count == 0) {
            return true;
        } else {
            return false;
        }
    }
};