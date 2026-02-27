class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans = 0 , idx = piles.size()-1;
        sort(piles.begin() , piles.end());
        for (int i = 1 ; i <= piles.size()/3 ; i++) {
            ans += piles[idx-1];
            idx -= 2;
        }

        return ans;
    }
};