class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int i = 0 , steps = 0 ;
        while (memory1 >= i || memory2 >= i) {
            if (memory2 > memory1) {
                memory2 -= i;
            } else {
                memory1 -= i;
            }
            steps++;
            i++;
        }

        return {steps , memory1 , memory2};
    }
};