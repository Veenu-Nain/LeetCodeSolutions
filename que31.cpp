class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int piv=-1;
       for(int i=arr.size()-2;i>=0;i--){
           if(arr[i]<arr[i+1]){
               piv = i;
               break;
           }
       }
       if(piv == -1){
           int i=0, j=arr.size()-1;
           while(i<=j){
           swap(arr[i],arr[j]);
           i++;
           j--;
       }
       return;
       }
       for(int i=arr.size()-1;i>piv;i--){
           if(arr[i]>arr[piv]){
               swap(arr[i],arr[piv]);
               break;
           }
       }
       int i=piv+1, j=arr.size()-1;
       while(i<=j){
           swap(arr[i],arr[j]);
           i++;
           j--;
       } 
    }
};
