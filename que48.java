class Solution {
    public void rotate(int[][] matrix) {
        int n = matrix.length;
        int[][] ans = new int[n][n];
        for(int r=0; r<n; r++){
            for(int c=0; c<n ;c++){

                ans[r][c] = matrix[n-1-c][r];
            }
        }
         for(int r=0; r<n; r++){
            for(int c=0; c<n ;c++){

                matrix[r][c] = ans[r][c];
            }
        }
        
    }
}
