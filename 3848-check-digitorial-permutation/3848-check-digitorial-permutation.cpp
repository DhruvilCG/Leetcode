class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int> freq1(10 , 0);
        vector<int> freq2(10 , 0);

        int sum = 0;
        int temp = n;
        while (temp > 0) {
            int end = temp%10;
            freq1[end]++;
            int fac = 1;
            for (int i = 1 ; i <= end ; i++) {
                fac *= i;
            }
            sum += fac;
            temp /= 10;
        }

        while (sum > 0) {
            int end = sum%10;
            freq2[end]++;
            sum /= 10;
        }

        return freq1 == freq2;
    }
};