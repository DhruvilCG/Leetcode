class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int end  = min(word1.size() , word2.size());
        for (int i = 0 ; i < end ; i++) {
            ans = ans+word1[i]+word2[i];
        }
        if (word1.size() < word2.size()) {
            for (int i = end ; i < word2.size() ; i++) {
                ans += word2[i];
            }
        } else {
            for (int i = end ; i < word1.size() ; i++) {
                ans += word1[i];
            }
        }

        return ans;
    }
};