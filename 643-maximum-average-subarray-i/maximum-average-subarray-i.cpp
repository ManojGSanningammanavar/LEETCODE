class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left =0, sum =0;

        for(int right =0; right<k; right++){
            sum += nums[right];
        }
        int ans = sum ;
        for(int right = k ; right< nums.size(); right++){
            sum -= nums[left];
            left++;
            sum += nums[right];
            ans = max(sum, ans);
        }
        return (double)ans/k;
    }
};