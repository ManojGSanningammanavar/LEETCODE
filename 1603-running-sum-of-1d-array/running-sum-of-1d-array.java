class Solution {
    public int[] runningSum(int[] nums) {
        int n = nums.length;
        for(int iter =1; iter<n; iter++){
            nums[iter] = nums[iter] + nums[iter-1];
        }
        return nums;
    }
}