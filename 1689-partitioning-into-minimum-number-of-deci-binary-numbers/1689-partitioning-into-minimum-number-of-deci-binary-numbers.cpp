class Solution {
public:
    int minPartitions(string n) {
        int count = 0 ;
        for (int i = 0 ; i < n.size() ; i++) {
            if (count < (n[i] - '0')) {
                count = (n[i] - '0');
            }
        }

        return count;
    }
};