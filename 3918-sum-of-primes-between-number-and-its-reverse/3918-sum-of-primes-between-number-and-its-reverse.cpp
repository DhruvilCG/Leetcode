class Solution {
public:
    int sumOfPrimesInRange(int n) {
        string num = to_string(n);
        reverse(num.begin(), num.end());
        int st = n;
        int end = stoi(num);
        if (end < st) {
            st += end;
            end = st - end;
            st = st - end;
        }

        int sum = 0;
        for (int i = st; i <= end; i++) {
            if (i <= 1) {
                continue;
            }
            int count = 0;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    count = 1;
                    break;
                }
            }
            if (count == 0) {
                sum += i;
            }
        }

        return sum;
    }
};