class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if (n == 0) return true ;
        
        for (int i = 0 ; i < f.size() ; i++) {
            bool left = false , right = false ;
            if (f[i] == 0) {
                left = (i==0 || f[i-1] == 0) ;
                right = (i==f.size()-1 || f[i+1] == 0) ;

                if (left && right) {
                    f[i] = 1 ;
                    n -- ;
                }
            }
            if (n == 0) {
                return true ;
            }
        }


        return false ;
    }
};