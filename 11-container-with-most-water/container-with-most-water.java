class Solution {
    public int maxArea(int[] height) {

        // 1.take left and right
        // 2.check if value of left+1 is greater than left 
        // 3.check if value of right-1 is greater than right
        // 4.if left is grater than right return right**;
        // 5. else return left**;  

        int left =0, right = height.length -1;
        int max = 0;
        while(left < right){
            int width = right - left;
            int area =  Math.min(height[left], height[right]) * width;
            max = Math.max(max,area);

            if(height[left]< height[right]) left++;
            else right--;
        }
        return max;
    }
}