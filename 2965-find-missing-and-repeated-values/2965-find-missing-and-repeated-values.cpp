class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // int currSum = 0;
        // unordered_map<int,int> m1 ;
        // int actualSum = (grid.size() * grid[0].size()) * (grid.size() * grid[0].size() +1) / 2 ;
        // int repeated ;

        // for (int i = 0 ; i < grid.size() ; i++) {
        //     for (int j = 0 ; j < grid[0].size() ; j++) {
        //         currSum += grid[i][j] ;
        //         m1[grid[i][j]]++ ;
        //         if (m1[grid[i][j]] > 1) {
        //             repeated = grid[i][j] ;
        //         }
        //     }
        // }

        // return {repeated , repeated-(currSum-actualSum)} ;






        int currSum = 0;
        unordered_set<int> s1 ;
        int actualSum = (grid.size() * grid[0].size()) * (grid.size() * grid[0].size() +1) / 2 ;
        int repeated ;

        for (int i = 0 ; i < grid.size() ; i++) {
            for (int j = 0 ; j < grid[0].size() ; j++) {
                currSum += grid[i][j] ;
                if (s1.find(grid[i][j]) != s1.end()) {
                    repeated = grid[i][j] ;
                } else {
                    s1.insert(grid[i][j]) ;
                }
            }
        }

        return {repeated , repeated-(currSum-actualSum)} ;
    }
};