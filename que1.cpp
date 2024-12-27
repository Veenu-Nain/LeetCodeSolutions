class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0; i<nums.size();i++){
            int first = nums[i];
            int second = target - first;
            if(m.find(second) != m.end()){
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[first]=i;
        }
        return ans;
    }
};