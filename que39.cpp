class Solution {
public:
    set<vector<int>>s;//to remove duplicates
    void getComb(vector<int>& candidates,int idx, int target,vector<int>&comb,vector<vector<int>>&ans){
        //base cases
        if(idx==candidates.size() || target < 0){
            return;
        }
        if(target==0){
            if(s.find(comb)==s.end()){
                ans.push_back(comb);
                s.insert(comb);
                return;
            }
        }

        //include single time
        comb.push_back(candidates[idx]);
        getComb(candidates,idx+1,target-candidates[idx],comb,ans);

        //include multiple times
        getComb(candidates,idx,target-candidates[idx],comb,ans);

        //backtracking step
        comb.pop_back();

        //exclusion
        getComb(candidates,idx+1,target,comb,ans);
    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>comb;
        vector<vector<int>>ans;
        getComb(candidates,0,target,comb,ans);
        return ans;
    }
};
