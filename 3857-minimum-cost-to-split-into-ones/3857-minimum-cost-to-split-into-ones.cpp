class Solution {
public:
    int minCost(int n) {
        // int a = n - 1;
        // int cost = a;
        // while (a > 1) {
        //     a -= 1;
        //     cost += a;
        // }

        // return cost;







        return n * (n - 1) / 2;
    }
};