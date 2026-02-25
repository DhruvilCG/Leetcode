class Solution {
public:
    string largestEven(string s) {
        int last2 = -1;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '2') {
                last2 = i;
                break;
            }
        }

        return s.substr(0, last2 + 1);
    }
};