class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end= arr.size()-2;
        while(st <= end){
            if(arr.size()==1){
                return 0;
            }
            int mid = st + (end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            if(arr[mid-1]<arr[mid]){
                st = mid + 1;
            }else if(arr[mid]>arr[mid+1]){
                end = mid - 1;
            }
        }
        return -1;
    }
};
