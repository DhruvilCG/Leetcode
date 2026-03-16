class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        set<int> st ;

        for (int i = 0 ; i < m ; i++) {
            for (int j = 0 ; j < n ; j++) {
                
                st.insert(grid[i][j]);
                if (st.size() >= 4) {
                    st.erase(begin(st));
                }

                for (int size = 1 ; i-size >= 0 && j-size >= 0 && i+size < m && j+size < n ; size++) {
                    int sum = 0;
                    for (int k = 0 ; k <= size-1 ; k++) {
                        sum += grid[i-size+k][j+k];
                        sum += grid[i+k][j+size-k];
                        sum += grid[i+size-k][j-k];
                        sum += grid[i-k][j-size+k];
                    }
                    st.insert(sum);
                    if (st.size() >= 4) {
                        st.erase(begin(st));
                    }
                }
            }
        }

        vector<int> ans (rbegin(st) , rend(st));
        return ans;
    }
};