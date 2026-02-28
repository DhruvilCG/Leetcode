class Solution {
public:
    int concatenatedBinary(int n) {
        // string end = "";
        // const int MOD = 1e9 + 7;
        // for (int i = 1 ; i <= n ; i++) {
        //     int num = i;
        //     string bin = "";
            
        //     while (num > 0) {
        //         bin = char(num%2 + '0') + bin;
        //         num /= 2;
        //     }

        //     end += bin;
        // }

        // int ans = 0;
        // for (char c: end) {
        //     ans = (ans * 2 + (c - '0')) % MOD;
        // }

        // return ans;






        long long result = 0;
        const int MOD =  1e9 + 7;
        for (int i = 1 ; i <= n ; i++) {
            int digits = (log2(i) + 1);
            result = ((result << digits)%MOD + i)%MOD;
        }

        return result;
    }
};