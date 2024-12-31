class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int r,int c,char dig){
        //horizontal
        for(int j=0;j<9;j++){
            if(board[r][j]==dig){
                return false;
            }
        }
        //vertical
        for(int i=0;i<9;i++){
            if(board[i][c]==dig){
                return false;
            }
        }
        //grid
        int sr=(r/3)*3;
        int sc=(c/3)*3;
        for(int i=sr; i<sr+3;i++){
            for(int j=(c/3)*3; j<sc+3;j++){
                if(board[i][j]==dig){
                    return false;
                }
            }
        }
        return true;
    }
    bool helper(vector<vector<char>>& board, int r,int c){
        if(r==9){
            return true;
        }
        int nextr = r , nextc = c+1;
        if(nextc == 9){
            nextr = r+1;
            nextc = 0;
        }
        if(board[r][c] != '.'){
            return helper(board,nextr,nextc);
        }
        for(char dig ='1';dig<='9';dig++){
            if(isSafe(board,r,c,dig)){
                board[r][c]=dig;
                if(helper(board,nextr,nextc)){
                    return true;
                }
                board[r][c]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
    }
};
