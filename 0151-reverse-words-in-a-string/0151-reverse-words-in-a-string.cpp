class Solution {
public:
    string reverseWords(string s) {
        s.erase(0 , s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ')+1);

        stringstream ss(s) ;
        s = "" ;
        vector<string> v ;
        while (ss >> s) {
            v.push_back(s);
        }

        reverse(v.begin() , v.end()) ;
        s = "" ;

        for (int i = 0 ; i < v.size() ; i++) {
            s += v[i] + ' ';
        }
        s.erase(s.find_last_not_of(' ')+1);

        return s;
    }
};