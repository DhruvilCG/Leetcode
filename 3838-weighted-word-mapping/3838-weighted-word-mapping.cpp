class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        // vector<char> letters = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r',
        //                         'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i',
        //                         'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
        // string ans = "";
        // for (int i = 0; i < words.size(); i++) {
        //     int sum = 0;
        //     for (int j = 0; j < words[i].size(); j++) {
        //         sum += weights[words[i][j] - 'a'];
        //     }
        //     sum %= 26;
        //     ans += letters[sum];
        // }

        // return ans;








        
        string ans = "";
        for (int i = 0; i < words.size(); i++) {
            int sum = 0;
            for (int j = 0; j < words[i].size(); j++) {
                sum += weights[words[i][j] - 'a'];
            }
            ans += char('z' - (sum%26));
        }

        return ans;
    }
};