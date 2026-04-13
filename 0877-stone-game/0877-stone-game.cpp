class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int st = 0, end = piles.size() - 1;
        int alice = 0, bob = 0;
        while (st < end) {
            if (piles[st] > piles[end]) {
                alice += piles[st];
                bob += piles[end];
            } else {
                bob += piles[st];
                alice += piles[end];
            }

            st++;
            end--;
        }

        return alice > bob;
    }
};