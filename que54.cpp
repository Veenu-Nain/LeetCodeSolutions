class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>ans;
        int sr=0, er=m-1, sc=0, ec=n-1;

        while(sr<=er && sc<=ec){
            //top
            for(int j=sc; j<=ec; j++){
                ans.push_back(matrix[sr][j]);
            }
            //right
             for(int i=sr+1; i<=er; i++){
                ans.push_back(matrix[i][ec]);
            }
            //bottom
             for(int j=ec-1; j>=sc; j--){
                if(sr==er){
                    break;
                }
                ans.push_back(matrix[er][j]);
            }
            //left
             for(int i=er-1; i>=sr+1; i--){
                 if(sc==ec){
                    break;
                }
                ans.push_back(matrix[i][sc]);
            }

        sr++;
        er--;
        sc++;
        ec--;
        }
        return ans;
    }
};
