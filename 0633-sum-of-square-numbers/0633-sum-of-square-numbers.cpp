class Solution {
public:
    bool judgeSquareSum(int c) {    
        if (c == 1) {
            return true;
        }

        long long a = 0 , b = sqrt(c);
        while (a <= b) {
            long long sum = a*a + b*b ;

            if (sum == c) {
                return true;
            } else if (sum > c) {
                b--;
            } else {
                a++;
            }
        } 

        return false;
    }
};