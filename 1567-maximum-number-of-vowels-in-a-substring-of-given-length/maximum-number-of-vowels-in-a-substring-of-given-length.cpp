class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0, count = 0;

        for(int right =0; right < k ; right++ ){
            if(s[right] == 'a' || s[right] == 'e' ||s[right] == 'i' || s[right] == 'o' || s[right] == 'u' ){
                count++;
            }
        } 
        int maxcount = count;

        for(int right = k ; right < s.size(); right++){
            if(s[left] == 'a' || s[left] == 'e' ||s[left] == 'i' || s[left] == 'o' || s[left] == 'u' ){
                count--;
            }
            left++;
            if(s[right] == 'a' || s[right] == 'e' ||s[right] == 'i' || s[right] == 'o' || s[right] == 'u' ){
                count++;
            }
            maxcount  = max(maxcount,count);
        }
        return maxcount;
    }
};

//first initialise left and count 
//then calculate the count of vowels from the very first substring
//the put that count to any other variable 
// the loop again from k to end of the sting
//in loop minus the left and increment thr left add the next value 
//the see count of the vowles from the string 
// then check the max 
// return max