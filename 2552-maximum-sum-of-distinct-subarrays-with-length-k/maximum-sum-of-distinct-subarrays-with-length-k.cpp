class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int left =0;long long sum =0;
        unordered_map<int,  int> freq;

        for(int right = 0; right <k; right++){
            
                sum += nums[right] ;
                freq[nums[right]]++;
            
        }


        long long maxsum = 0;
        if(freq.size()== k) maxsum = sum;

        for(int right =k ; right < nums.size(); right++){
            sum -=nums[left];
            freq[nums[left]]--;

            if(freq[nums[left]] == 0) {
                freq.erase(nums[left]);
            }
            left++;
            
            sum += nums[right] ;
            freq[nums[right]]++;
        
        if(freq.size()== k) maxsum = max(maxsum,sum);
    }
    return maxsum;
    }
};