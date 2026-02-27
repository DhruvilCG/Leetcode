class Solution {
public:
    int minOperations(int n) {
        int st = 1 , end = (2*(n-1) + 1);
        int count = 0 ;

        while (st != end){
            count++;
            end--;
            st++;
        }

        for (int i = 1 ; i < n/2 ; i++) {
            count += (st - (2*i+1));
        }
        return count;
    }
};