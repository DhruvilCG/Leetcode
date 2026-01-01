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





        for (int i = 0 ; i < matrix.size() ; i++) {
            int st = 0 ;
            int end = matrix[i].size()-1 ;
            while (st <= end) {
                int mid = st + (end - st) / 2 ;

                if (matrix[i][mid] == target) {
                    return true ;
                } else if (matrix[i][mid] > target) {
                    end = mid-1 ;
                } else {
                    st = mid+1 ;
                }
            }
        }

        return false ;
    }
};