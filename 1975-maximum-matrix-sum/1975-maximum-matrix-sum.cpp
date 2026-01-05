class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int negCount=0;
        long long sum = 0;
        int minimum= INT_MAX;
        for(int i =0 ; i<m;i++ ){
            for(int j = 0 ; j<n ;j++){
                int val = matrix[i][j];
                if(val<0){
                    negCount++;
                }
               if(abs(val)<minimum){
                minimum =  abs(val);
               }

               sum += abs(val);
            }
        }
        if(negCount %2==0){
            return sum;
        }else{
            return sum = sum - 2*minimum;
        }
    }
};