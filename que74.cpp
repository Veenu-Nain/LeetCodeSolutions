class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int target,int row){
        int n = matrix[0].size();
        int srow = 0, erow = n-1;
        while(srow<=erow){
            int mrow= srow + (erow-srow)/2;
            if(matrix[row][mrow]==target){
                return true;
            }else if (matrix[row][mrow] > target){
                //left
                erow = mrow - 1;
            }else{
                //right
                srow = mrow + 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int st = 0, end = m-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(target>=matrix[mid][0] && target <= matrix[mid][n-1]){
               return searchInRow(matrix,target,mid);
            }else if (target<matrix[mid][0]){
                //left
                end = mid -1;
            }else if(target > matrix[mid][n-1]){
                //right
                st = mid + 1;
            }
        }

        
    return false;}
};
