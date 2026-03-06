int lengthOfLongestSubstring(char* s) {
       int n = strlen(s);
    int maxLength = 0;
    
    // Check all possible substrings
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // Check if substring from i to j has all unique characters
            int hasUnique = 1;
            for (int k = i; k < j; k++) {
                for (int l = k + 1; l <= j; l++) {
                    if (s[k] == s[l]) {
                        hasUnique = 0;
                        break;
                    }
                }
                if (!hasUnique) break;
            }
            
            if (hasUnique) {
                int length = j - i + 1;
                if (length > maxLength) {
                    maxLength = length;
                }
            }
        }
    }
    
    return maxLength;
}
