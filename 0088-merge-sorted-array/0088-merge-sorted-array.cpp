class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int point1 = 0 , point2 = 0;
        vector<int> ans;

        while (point1 < m && point2 < n) {
            if (nums1[point1] > nums2[point2]) {
                ans.push_back(nums2[point2]);
                point2++;
            } else {
                ans.push_back(nums1[point1]);
                point1++;
            }
        }

        if (point1 != m) {
            while (point1 < m) {
                ans.push_back(nums1[point1]);
                point1++;
            }
        } else if (point2 != n) {
            while (point2 < n) {
                ans.push_back(nums2[point2]);
                point2++;
            }
        }

        for (int i = 0 ; i < nums1.size() ; i++) {
            nums1[i] = ans[i];
        }
    }
};