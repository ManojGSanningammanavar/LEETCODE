class Solution {
public:
    bool isPalindrome(int x) {
        long long result = 0;
        int original =x;
        if(x<0){
                return false;
        }
        else{
        while(x!=0){
            result=result*10+(x%10);  
            x/=10;
        }
    return result == original;
    }
    }
};