char* longestPalindrome(char* s) {
    
    int n = strlen(s);

    if(n <= 1)
        return s;

    int start = 0;
    int maxLen = 1;

    for(int i = 0; i < n; i++) {

        // Odd length
        int l = i;
        int r = i;

        while(l >= 0 && r < n && s[l] == s[r]) {

            if(r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }

            l--;
            r++;
        }

        // Even length
        l = i;
        r = i + 1;

        while(l >= 0 && r < n && s[l] == s[r]) {

            if(r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }

            l--;
            r++;
        }
    }

    static char ans[1001];

    strncpy(ans, s + start, maxLen);
    ans[maxLen] = '\0';

    return ans;
}
