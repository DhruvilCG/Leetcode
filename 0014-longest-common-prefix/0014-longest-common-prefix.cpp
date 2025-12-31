class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // int smallTemp = strs[0].size();

        //     for (int i = 0 ; i < strs.size()-1 ; i++) {
        //         int temp = 0 ;
        //         for (int j = 0 ; j < strs[i].length() ; j++) {
        //             if (strs[i][j] == strs[i+1][j]) {
        //                 temp++ ;
        //             } else {
        //                 break ;
        //             }
        //         }

        //         if (smallTemp > temp) {
        //             smallTemp = temp ;
        //         }
        //     }
        //     return strs[0].substr(0 , smallTemp) ;

        sort(strs.begin(), strs.end());

        int minLen = min(strs[0].size(), strs[strs.size() - 1].size());
        string str = "";

        for (int i = 0 ; i < minLen; i++) {
            if (strs[0][i] == strs[strs.size() - 1][i]) {
                str += strs[0][i];
            } else {
                break;
            }
        }

        return str;
    }
};