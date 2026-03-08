class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (mat.size() * mat[0].size() != r * c) {
            return mat;
        }

        vector<int> nums;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                nums.push_back(mat[i][j]);
            }
        }

        vector<vector<int>> ans(r, vector<int>(c));
        int idx = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                ans[i][j] = nums[idx];
                idx++;
            }
        }

        return ans;
    }
};