class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            //PD
            sum += mat[i][i];
            if(i != n-i-1){
                //SD
                sum += mat[i][n-i-1];
            }
        }
        return sum;
    }
};
