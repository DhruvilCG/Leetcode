class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int largest = sum;
        for (int i = 0; i < gain.size(); i++) {
            sum += gain[i];
            largest = max(largest, sum);
        }

        return largest;
    }
};