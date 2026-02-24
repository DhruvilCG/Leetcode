class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int ch = coordinates[0]-97;
        int num = coordinates[1]-48;

        return (ch+num)%2 == 0;
    }
};