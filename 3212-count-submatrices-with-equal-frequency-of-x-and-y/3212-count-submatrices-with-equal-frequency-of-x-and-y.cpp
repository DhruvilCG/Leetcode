class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        // int m = grid.size();
        // int n = grid[0].size();
        // int count = 0;

        // int countX = 0;
        // int countY = 0;
        // for (int i = 0; i < m; i++) {

        //     if (grid[i][0] == 'X')
        //         countX++;
        //     if (grid[i][0] == 'Y')
        //         countY++;

        //     if (countX >= 1 && countX == countY)
        //         count++;
        // }

        // countX = (grid[0][0] == 'X');
        // countY = (grid[0][0] == 'Y');

        // for (int i = 1; i < n; i++) {

        //     if (grid[0][i] == 'X')
        //         countX++;
        //     if (grid[0][i] == 'Y')
        //         countY++;

        //     if (countX >= 1 && countX == countY)
        //         count++;

        //     int count1 = countX;
        //     int count2 = countY;
                        

        //     for (int j = 1; j < m; j++) {
                
        //         for (int k = 0; k <= i; k++) {
        //             if (grid[j][k] == 'X')
        //                 count1++;
        //             if (grid[j][k] == 'Y')
        //                 count2++;
        //         }

        //         if (count1 >= 1 && count1 == count2)
        //             count++;
        //     }
        // }

        // return count;








        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        vector<vector<int>> cumSumX(m, vector<int>(n, 0));
        vector<vector<int>> cumSumY(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cumSumX[i][j] = (grid[i][j] == 'X');
                cumSumY[i][j] = (grid[i][j] == 'Y');

                if (i - 1 >= 0) {
                    cumSumX[i][j] += cumSumX[i - 1][j];
                    cumSumY[i][j] += cumSumY[i - 1][j];
                }

                if (j - 1 >= 0) {
                    cumSumX[i][j] += cumSumX[i][j - 1];
                    cumSumY[i][j] += cumSumY[i][j - 1];
                }

                if (i - 1 >= 0 && j - 1 >= 0) {
                    cumSumX[i][j] -= cumSumX[i - 1][j - 1];
                    cumSumY[i][j] -= cumSumY[i - 1][j - 1];
                }

                if (cumSumX[i][j] == cumSumY[i][j] && cumSumX[i][j] > 0) {
                    count++;
                }
            }
        }
        return count;
    }
};