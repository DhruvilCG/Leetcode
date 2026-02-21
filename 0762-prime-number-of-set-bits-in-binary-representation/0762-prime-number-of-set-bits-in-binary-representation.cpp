class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        // int ans = 0;
        // for (int i = left ; i <= right ; i++) {
        //     int count = __builtin_popcount(i);
        //     bool flag = false;
        //     if (count == 0 || count == 1) {
        //         continue;
        //     }
        //     if (count == 2) {
        //         ans++;
        //         continue;
        //     }
        //     for (int j = 2 ; j < count ; j++) {
        //         if (count%j == 0) {
        //             flag = true ;
        //             break;
        //         }
        //     }
        //     if (!flag) {
        //         ans++; 
        //     }
        // }

        // return ans;







        unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        int ans = 0 ;
        for (int i = left ; i <= right ; i++) {
            int count = __builtin_popcount(i);
            if (primes.find(count) != primes.end()) {
                ans++;
            }
        }

        return ans;

    }
};