class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i <= n - 2; i++) {
            string s = "";
            int temp = n;
            while (temp > 0) {
                s += temp % i;
                temp /= i;
            }

            reverse(s.begin(), s.end());

            for (int j = 0; j < s.length() / 2; j++) {
                if (s[j] != s[s.length() - j]) {
                    return false;
                }
            }
        }

        return true;
    }
};