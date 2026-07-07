class Solution {
    private boolean isVowel(char ch) {
        return ch == 'a' ||
               ch == 'e' ||
               ch == 'i' ||
               ch == 'o' ||
               ch == 'u';
    }

    public int maxVowels(String s, int k) {
        int left = 0, count = 0;

        // Count vowels in the first window
        for (int right = 0; right < k; right++) {
            if (isVowel(s.charAt(right))) {
                count++;
            }
        }

        int maxCount = count;

        // Slide the window
        for (int right = k; right < s.length(); right++) {
            if (isVowel(s.charAt(left))) {
                count--;
            }
            left++;

            if (isVowel(s.charAt(right))) {
                count++;
            }

            maxCount = Math.max(maxCount, count);
        }

        return maxCount;
    }
}