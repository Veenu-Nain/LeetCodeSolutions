class Solution {
public:
    void getAllSubsets(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>> &allSubsets){
        //base case
        if(i==nums.size()){
            allSubsets.push_back({ans});
            return;
        }
        
        //inclusion call
        ans.push_back(nums[i]);
        getAllSubsets(nums,ans,i+1,allSubsets);

        //backtrack
        ans.pop_back();
        
        //exclusion call
        getAllSubsets(nums,ans,i+1,allSubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allSubsets;
        getAllSubsets(nums,ans,0,allSubsets);
        return allSubsets;
    }
};
