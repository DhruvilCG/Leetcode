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





// class Solution {
// public:
//     int m ;
//     int n ;
//     int mod = 1e9+7;

//     vector<vector<pair<long long , long long>>> t;

//     pair<long long , long long> solve(int i ,int j, vector<vector<int>>& grid) {
//         if (i == m-1 && j == n-1) {
//             return {grid[i][j] , grid[i][j]};
//         }

//         long long maxVal = LLONG_MIN;
//         long long minVal = LLONG_MAX;

//         if (t[i][j] != make_pair(LLONG_MIN , LLONG_MAX)) {
//             return t[i][j];
//         }

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

//         return t[i][j] = {maxVal , minVal};
//     }

//     int maxProductPath(vector<vector<int>>& grid) {
//         m = grid.size() ;
//         n = grid[0].size();
//         t = vector<vector<pair<long long , long long>>>(m, vector<pair<long long , long long>>(n , {LLONG_MIN , LLONG_MAX}));

//         auto[maxVal , minVal] = solve(0 , 0 , grid);

//         return maxVal < 0 ? -1 : maxVal % mod;
//     }
// };





class Solution {
public:
    int mod = 1e9+7;

    int maxProductPath(vector<vector<int>>& grid) {
        int m = grid.size() ;
        int n = grid[0].size();
        
        vector<vector<pair<long long , long long>>> t(m , vector<pair<long long , long long>>(n));

        t[0][0] = {grid[0][0] , grid[0][0]};

        for (int j = 1 ; j < n ; j++) {
            t[0][j].first = t[0][j-1].first * grid[0][j];
            t[0][j].second = t[0][j-1].second * grid[0][j];
        }

        for (int i = 1 ; i < m ; i++) {
            t[i][0].first = t[i-1][0].first * grid[i][0];
            t[i][0].second = t[i-1][0].second * grid[i][0];
        }

        for (int i = 1 ; i < m ; i++) {
            for (int j = 1 ; j < n ; j++) {
                long long upMax = t[i-1][j].first;
                long long upMin = t[i-1][j].second;

                long long leftMax = t[i][j-1].first;
                long long leftMin = t[i][j-1].second;

                t[i][j].first = max({upMax*grid[i][j] , upMin*grid[i][j] , leftMax*grid[i][j] , leftMin*grid[i][j]});
                t[i][j].second = min({upMax*grid[i][j] , upMin*grid[i][j] , leftMax*grid[i][j] , leftMin*grid[i][j]});
            }
        }

        auto [maxProd , minProd] = t[m-1][n-1];

        return maxProd < 0 ? -1 : maxProd % mod;
    }
};

