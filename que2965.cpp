class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a,b;
        vector<int> ans;
        unordered_set<int> s;
        int n = grid.size();
        int actSum=0;
        for(int i=0; i<n;i++){
            for(int j=0;j<n;j++){
                actSum += grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }
        int expSum = (n*n)*((n*n)+1)/2;
        b= expSum + a - actSum;
        ans.push_back(b);
        return ans;

    }
};
