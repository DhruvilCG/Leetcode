class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size());
        for (int i = 0; i < boxes.size(); i++) {
            int ctn = 0;
            for (int j = 0; j < boxes.size(); j++) {
                if (boxes[j] == '1') {
                    ctn += abs(i - j);
                }
            }
            ans[i] = ctn;
        }

        return ans;
    }
};