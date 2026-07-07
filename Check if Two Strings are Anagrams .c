#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    int count[26] = {0};

    for(int i = 0; str1[i]; i++) {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    int flag = 1;

    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
