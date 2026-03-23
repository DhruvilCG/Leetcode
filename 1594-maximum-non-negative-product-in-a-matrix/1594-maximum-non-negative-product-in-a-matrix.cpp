// class Solution {
// public:
//     int m ;
//     int n ;
//     int mod = 1e9+7;

//     pair<long long , long long> solve(int i ,int j, vector<vector<int>>& grid) {
//         if (i == m-1 && j == n-1) {
//             return {grid[i][j] , grid[i][j]};
//         }

//         long long maxVal = LLONG_MIN;
//         long long minVal = LLONG_MAX;

//         if (i+1 < m) {
//             auto[downMax , downMin] = solve(i+1 , j , grid);
//             maxVal = max({maxVal , grid[i][j]*downMax , grid[i][j]*downMin});
//             minVal = min({minVal , grid[i][j]*downMax , grid[i][j]*downMin});
//         }

//         if (j+1 < n) {
//             auto[rightMax , rightMin] = solve(i , j+1 , grid);
//             maxVal = max({maxVal , grid[i][j]*rightMax , grid[i][j]*rightMin});
//             minVal = min({minVal , grid[i][j]*rightMax , grid[i][j]*rightMin});
//         }

//         return {maxVal , minVal};
//     }

//     int maxProductPath(vector<vector<int>>& grid) {
//         m = grid.size() ;
//         n = grid[0].size();

//         auto[maxVal , minVal] = solve(0 , 0 , grid);

//         return maxVal < 0 ? -1 : maxVal % mod;
//     }
// };





class Solution {
public:
    int m ;
    int n ;
    int mod = 1e9+7;

    vector<vector<pair<long long , long long>>> t;

    pair<long long , long long> solve(int i ,int j, vector<vector<int>>& grid) {
        if (i == m-1 && j == n-1) {
            return {grid[i][j] , grid[i][j]};
        }

        long long maxVal = LLONG_MIN;
        long long minVal = LLONG_MAX;

        if (t[i][j] != make_pair(LLONG_MIN , LLONG_MAX)) {
            return t[i][j];
        }

        if (i+1 < m) {
            auto[downMax , downMin] = solve(i+1 , j , grid);
            maxVal = max({maxVal , grid[i][j]*downMax , grid[i][j]*downMin});
            minVal = min({minVal , grid[i][j]*downMax , grid[i][j]*downMin});
        }

        if (j+1 < n) {
            auto[rightMax , rightMin] = solve(i , j+1 , grid);
            maxVal = max({maxVal , grid[i][j]*rightMax , grid[i][j]*rightMin});
            minVal = min({minVal , grid[i][j]*rightMax , grid[i][j]*rightMin});
        }

        return t[i][j] = {maxVal , minVal};
    }

    int maxProductPath(vector<vector<int>>& grid) {
        m = grid.size() ;
        n = grid[0].size();
        t = vector<vector<pair<long long , long long>>>(m, vector<pair<long long , long long>>(n , {LLONG_MIN , LLONG_MAX}));

        auto[maxVal , minVal] = solve(0 , 0 , grid);

        return maxVal < 0 ? -1 : maxVal % mod;
    }
};