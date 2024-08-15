class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> subset = new ArrayList<>();

        createSubset(nums, 0, result, subset);
        return result;
    }
    private void createSubset(int[] nums, int idx, List<List<Integer>> result, List<Integer> subset){
        if(idx == nums.length){
            result.add(new ArrayList<>(subset));
            return;
        }
        subset.add(nums[idx]);
        createSubset(nums, idx+1, result, subset);

        subset.remove(subset.size()-1);
        createSubset(nums, idx+1, result, subset);
    }
}