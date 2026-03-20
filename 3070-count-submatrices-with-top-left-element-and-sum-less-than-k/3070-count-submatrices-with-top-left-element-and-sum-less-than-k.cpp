
class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        // int count = 0 , sum = 0;
        // for (int i = 0 ; i < grid.size() ; i++) {
        //     grid[i][0] += sum;
        //     if (sum <= k) {
        //         count++;
        //     } else {
        //         break;
        //     }
        // }

        // sum = 0 , count-- ;
        // int sum1 = 0;
        // for (int i = 0 ; i < grid[0].size() ; i++) {
        //     grid[0][i] += sum;
        //     grid[0][i] += sum1;
        //     if (sum <= k) {
        //         count++;
        //     } else {
        //         break;
        //     }

        //     if (sum1 <= k) {
        //         continue;
        //     }
        //     for (int j = 1 ; j <= i ; j++) {
        //         bool iterate = true;
        //         if (iterate == false) {
        //             break;
        //         }
        //         for (int k = 0 ; k <= i ; k++) {
        //             sum1 += grid[i][j] ;
        //             if (sum1 <= k) {
        //                 count++;
        //             } else {
        //                 iterate = false;
        //                 break;
        //             }
        //         }
        //     }

        // }
        
        // return count;





        int n = grid.size();
        int m = grid[0].size();
        int count = 0 ;

        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < m ; j++) {
                if (i-1 >= 0) {
                    grid[i][j] += grid[i-1][j];
                }
                if (j-1 >= 0) {
                    grid[i][j] += grid[i][j-1];
                } 
                if (i-1 >= 0 && j-1 >= 0) {
                    grid[i][j] -= grid[i-1][j-1];
                }  

                if (grid[i][j] <= k) {
                    count++;
                } else {
                    break;
                }
            }
        }

        return count;
    }
};