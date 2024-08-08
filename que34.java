class Solution {
    public int[] searchRange(int[] nums, int target) {
        int [] result = {-1,-1};
        int left = binarySearch(nums,target,true);
        int right = binarySearch(nums,target,false);
        result[0] = left;
        result[1] = right;
        return result;
    }
    private int binarySearch(int[] nums, int target, boolean isSearchingLeft){
        int low=0 , high =nums.length -1, idx = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(target < nums[mid]){
                high = mid-1;
            }else if(target > nums[mid]){
                low = mid +1;
            }else{
                idx = mid;
                if(isSearchingLeft){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
        }
        return idx;
    }
}
