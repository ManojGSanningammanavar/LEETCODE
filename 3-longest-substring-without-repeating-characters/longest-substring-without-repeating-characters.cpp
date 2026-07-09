class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> lastIndex ;

        int left =0 , maxLen = 0;

        for(int right = 0; right< s.size(); right++){

            char ch = s[right];

            if(lastIndex.count(ch) && lastIndex[ch] >= left){
                left = lastIndex[ch] +1;
            }

            lastIndex[ch] = right;
            maxLen  = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};