class Solution {
public:
    bool isValid(vector<int>& nums, int k,int maxAllowed){
        int sum=0,subArrays=1;
        for(int i=0; i<nums.size();i++){
             if(nums[i]>maxAllowed){
            return false;
        }
            if(sum + nums[i] <= maxAllowed){
                sum += nums[i];
            }else{
                subArrays++;
                sum = nums[i];
            }
        }
        if(subArrays > k){
            return false;
        }else{
            return true;
        }
    }
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size()){
            return -1;
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        int st=0, end = sum;
        int ans = -1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(isValid(nums,k,mid)){
                ans=mid;
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return ans;
    }
};
