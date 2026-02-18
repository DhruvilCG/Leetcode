class Solution {
public:
    bool isHappy(int n) {
        if (n == 1) {
            return true;
        }

        unordered_set<int> seen;
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int temp = 0;
            while (n > 0) {
                temp += (n % 10) * (n % 10);
                n /= 10;
            }

            n = temp;
        }

        return n == 1;
    }
};