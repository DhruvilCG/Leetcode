class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<int> endZeros(n , 0);

        for (int i = 0 ; i < n ; i++) {
            int count = 0 ;
            for (int j = n-1 ; j >= 0 ; j--) {
                if (grid[i][j] == 0) {
                    count++;
                } else {
                    break;
                }
            }

            endZeros[i] = count;
        }

        int steps = 0;

        for (int i = 0 ; i < n ; i++) {
            int need = n-i-1;
            int j = i;
            for (j = i ; j < endZeros.size() ; j++) {
                if (endZeros[j] < need) {
                    continue;
                } else {
                    break;
                }
            }

            if (j == n) {
                return -1;
            }

            steps += (j-i);

            while (j > i) {
                swap(endZeros[j] , endZeros[j-1]);
                j--;
            }
        }

        return steps;
    }
};