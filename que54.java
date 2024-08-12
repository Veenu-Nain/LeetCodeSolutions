class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> result = new ArrayList<>();

        int m = matrix.length;
        int n = matrix[0].length;

        int rs = 0, re = m-1, cs = 0, ce = n-1;

        while(rs<=re && cs<=ce){

            for(int j=cs; j<=ce; j++){
                result.add(matrix[rs][j]);
            }
            rs++;

             for(int i=rs; i<=re; i++){
                result.add(matrix[i][ce]);
            }
            ce--;

           if(rs <= re){
              for(int j=ce; j>=cs; j--){
                result.add(matrix[re][j]);
            }
            re--;
           }

           if(cs <= ce){
              for(int i=re; i>=rs; i--){
                result.add(matrix[i][cs]);
            }
            cs++;
           }
        }
        return result;
    }
}
