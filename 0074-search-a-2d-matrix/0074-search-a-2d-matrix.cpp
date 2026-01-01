class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for (int i = 0 ; i < matrix.size() ; i++) {
        //     for (int j = 0 ; j < matrix[0].size() ; j++) {
        //         if (matrix[i][j] == target) {
        //             return true ;
        //         }
        //     }
        // }

        // return false ;





        // for (int i = 0 ; i < matrix.size() ; i++) {
        //     int st = 0 ;
        //     int end = matrix[i].size()-1 ;
        //     while (st <= end) {
        //         int mid = st + (end - st) / 2 ;

        //         if (matrix[i][mid] == target) {
        //             return true ;
        //         } else if (matrix[i][mid] > target) {
        //             end = mid-1 ;
        //         } else {
        //             st = mid+1 ;
        //         }
        //     }
        // }

        // return false ;







        
        // for (int i = 0 ; i < matrix.size() ; i++) {
        //     if (target > matrix[i][matrix[i].size()-1]) {
        //         continue ;
        //     }
        //     int st = 0 ;
        //     int end = matrix[i].size()-1 ;
        //     while (st <= end) {
        //         int mid = st + (end - st) / 2 ;

        //         if (matrix[i][mid] == target) {
        //             return true ;
        //         } else if (matrix[i][mid] > target) {
        //             end = mid-1 ;
        //         } else {
        //             st = mid+1 ;
        //         }
        //     }
        // }

        // return false ;







        int stRow = 0, endRow = matrix.size() - 1;
        while (stRow <= endRow) {
            int midRow = stRow + (endRow - stRow) / 2;

            if (matrix[midRow][0] <= target &&
                matrix[midRow][matrix[midRow].size() - 1] >= target) {
                int st = 0, end = matrix[midRow].size() - 1;
                while (st <= end) {
                    int mid = st + (end - st) / 2;
                    if (matrix[midRow][mid] == target) {
                        return true;
                    } else if (matrix[midRow][mid] < target) {
                        st = mid + 1;
                    } else {
                        end = mid - 1;
                    }
                }
                return false ;
            } else if (matrix[midRow][0] > target) {
                endRow = midRow-1 ;
            } else {
                stRow = midRow + 1 ;
            }
        }

        return false;
    }
};