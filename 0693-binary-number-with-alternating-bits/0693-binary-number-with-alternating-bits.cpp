class Solution {
public:
    bool hasAlternatingBits(int n) {
        string bin = "";
        while (n > 0) {
            bin = char('0'+(n%2)) + bin;
            n /= 2;
        }

        for (int i = 0 ; i < bin.length()-1 ; i++) {
            if (bin[i] == '1' && bin[i+1] == '1') {
                return false;
            } 
            if (bin[i] == '0' && bin[i+1] == '0') {
                return false;
            }
        }

        return true;
    }
};