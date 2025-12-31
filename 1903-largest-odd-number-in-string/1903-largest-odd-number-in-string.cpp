class Solution {
public:
    string largestOddNumber(string num) {
        int temp = -1 ;
        for (int i = num.size()-1 ; i >= 0 ; i--) {
            if (num[i] % 2 != 0) {
                temp = i ;
                break ;
            }
        }
        string str = "" ;
        for (int i = 0 ; i <= temp ; i++) {
            str += num[i] ;
        }

        return str ;
    }
};