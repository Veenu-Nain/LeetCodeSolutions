class Solution {
public:
    void getAllPerm(vector<int>& nums,int idx,vector<vector<int>> &allPerm){
        if(idx==nums.size()){
            allPerm.push_back({nums});
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            getAllPerm(nums,idx+1,allPerm);
            swap(nums[i],nums[idx]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> allPerm;
       getAllPerm(nums,0,allPerm);
       return allPerm; 
    }
};
