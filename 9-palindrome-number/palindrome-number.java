class Solution {
    public boolean isPalindrome(int x) {
    int reverse = 0;
    int dup = x;
    while(x>0){
        int ld = x%10;
        reverse = (reverse*10) + ld;
        x/=10;
    }
    if(reverse == dup){
        return true;
    }
    return false;
    }
    }
   