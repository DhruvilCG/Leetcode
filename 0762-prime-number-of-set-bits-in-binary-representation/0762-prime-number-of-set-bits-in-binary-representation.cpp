class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            int count = __builtin_popcount(i);
            bool flag = false;
            if (count == 0 || count == 1) {
                continue;
            }
            if (count == 2) {
                ans++;
                continue;
            }
            for (int j = 2; j < count; j++) {
                if (count % j == 0) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                ans++;
            }
        }

        return ans;
    }
};