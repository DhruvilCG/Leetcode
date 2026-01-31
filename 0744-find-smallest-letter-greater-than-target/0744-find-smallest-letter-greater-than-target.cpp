class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // for (int i = letters.size()-1 ; i >= 0 ; i--) {
        //     if (letters[i] <= target) {
        //         return letters[(i+1)%letters.size()];
        //     }
        // }

        // return letters[0];


        for (char c : letters) {
            if (c > target) {
                return c;
            }
        }
        return letters[0];
    }
};