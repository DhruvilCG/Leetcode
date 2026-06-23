class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans(A.size());
        set<int> a, b;
        for (int i = 0; i < A.size(); i++) {
            int ctn = 0;
            a.insert(A[i]);
            b.insert(B[i]);

            for (int num : a) {
                if (b.count(num)) {
                    ctn++;
                }
            }

            ans[i] = ctn;
        }

        return ans;
    }
};