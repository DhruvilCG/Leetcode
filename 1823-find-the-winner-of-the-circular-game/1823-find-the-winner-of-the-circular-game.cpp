class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> vec;
        for (int i = 1; i <= n; i++) {
            vec.push_back(i);
        }

        int idx = 0;
        while (vec.size() > 1) {
            idx = (idx + k - 1) % vec.size();
            vec.erase(vec.begin() + idx);
        }

        return vec[0];
    }
};