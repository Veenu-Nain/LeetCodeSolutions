class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int freq = 0 , ans = 0;
        for(int i=0; i<arr.size(); i++ ){
            if(freq==0){
                ans = arr[i];
            }
            if(ans == arr[i]){
                freq++;
            }else{
                freq--;
            }
        }
        int count = 0;
        for(int val: arr){
            if(val == ans){
                count++;
            }
        }
       return ans;
    }
};
