class Solution {
    public void sortColors(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();
        map.put(0,0);
        map.put(1,0);
        map.put(2,0);

        for(int num : nums){
            map.put(num, map.get(num) + 1);
        }

        int idx =0 ;
        for(int color = 0; color<3; color++){
            int freq = map.get(color);
            for(int j = 0; j<freq; j++){
                nums[idx] = color;
                idx++;
            }
        }
    }
}
