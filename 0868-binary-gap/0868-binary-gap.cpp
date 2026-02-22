class Solution {
public:
    int binaryGap(int n) {
        string s = "";
        while (n > 0) {
            s = char(n%2 + '0') + s;
            n = n/2;
        }

        int ans = 0 , count = 0;
        for (int i = 0 ; i < s.size() ; i++) {
            if (s[i] == '1') {
                ans = max(ans,count);
                count= 0;
            }
            count++;
        }

        return ans;
    }
};