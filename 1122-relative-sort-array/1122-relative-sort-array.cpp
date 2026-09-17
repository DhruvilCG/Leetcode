class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int , int> um;
        for (int i = 0 ; i < arr1.size() ; i++) {
            um[arr1[i]]++;
        }

        vector<int> ans;
        for (int i = 0 ; i < arr2.size() ; i++) {
            while (um[arr2[i]] > 0) {
                ans.push_back(arr2[i]);
                um[arr2[i]]--;
            }
        }

        for (auto& [num,ctn]:um) {
            if (ctn != 0){
                while (ctn > 0) {
                    ans.push_back(num);
                    ctn--;
                }
            }
        }

        return ans;
    }
};