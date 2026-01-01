class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> arr1 (matrix.size() , 0) ; 
        vector<int> arr2 (matrix[0].size() , 0) ; 
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    arr1[i] = 1 ;
                    arr2[j] = 1 ;
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (arr1[i] == 1 || arr2[j] == 1) {
                    matrix[i][j] = 0 ;
                }
            }
        }
    }
};