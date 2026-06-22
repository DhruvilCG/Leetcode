class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        int ctn = 1;
        ans.push_back(chars[0]);
        char last = chars[0];
        for (int i = 1; i < chars.size(); i++) {
            if (last == chars[i]) {
                ctn++;
            } else {
                last = chars[i];
                if (ctn < 10 && ctn > 1) {
                    ans.push_back(ctn + '0');
                } else if (ctn != 1) {
                    string str = to_string(ctn);
                    for (char c : str) {
                        ans.push_back(c);
                    }
                }
                ans.push_back(chars[i]);
                ctn = 1;
            }
        }

        if (ctn > 1 && ctn < 10) {
            ans.push_back(ctn + '0');
        } else if (ctn != 1) {
            string str = to_string(ctn);
            for (char c : str) {
                ans.push_back(c);
            }
        }

        chars.clear();
        for (char c : ans) {
            chars.push_back(c);
        }

        return ans.size();
    }
};