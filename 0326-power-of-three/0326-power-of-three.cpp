class Solution {
public:
    bool isPowerOfThree(int n) {
        // if (n == 1) {
        //     return true;
        // }

        // long long prev = 1;
        // for (int i = 3 ; i <= n ; i=i+3) {
        //     prev *= 3;
        //     if (prev == n || prev >= n) {
        //         break;
        //     }
        // }

        // if (prev == n) {
        //     return true;
        // } else {
        //     return false;
        // }





        
        if (n <= 0) {
            return false;
        }
        if (n == 1) {
            return true;
        }

        long long prev = 1;
        while (prev < n) {
            prev *= 3;
        }

        if (prev == n) {
            return true;
        } else {
            return false;
        }
    }
};