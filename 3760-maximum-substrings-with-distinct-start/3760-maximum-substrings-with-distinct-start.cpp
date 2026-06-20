class Solution {
public:
    int maxDistinct(string s) {
        vector<int> letters(26, 0);
        for (int i = 0; i < s.size(); i++) {
            letters[s[i] - 'a'] = 1;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (letters[i] == 1) {
                ans++;
            }
        }

        return ans;
    }
};