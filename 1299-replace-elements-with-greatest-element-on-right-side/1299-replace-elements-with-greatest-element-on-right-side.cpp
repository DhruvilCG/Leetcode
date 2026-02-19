class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // int n = arr.size() ;

        // for (int i = 0 ; i < n-1 ; i++) {
        //     for (int j = i+1 ; j < n ; j++) {
        //         if (arr[j] > arr[i] || j == i+1) {
        //             arr[i] = arr[j] ;
        //         }
        //     }
        // }

        // arr[n-1] = -1 ;

        // return arr ;





        int max = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        for (int i = arr.size()-2 ; i >= 0 ; i--) {
            int temp = max;
            if (max < arr[i]) {
                max = arr[i];
            }
            arr[i] = temp;
        }

        return arr;
    }
};