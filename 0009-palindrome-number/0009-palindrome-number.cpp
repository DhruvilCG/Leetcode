class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x ;
        long long reversed = 0 ;

        while (temp > 0) {
            int lastNum = temp%10 ;
            reversed = reversed*10 + lastNum ;
            temp = temp/10 ;
        }

        return x == reversed ;
    }
};