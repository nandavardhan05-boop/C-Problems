#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";
    int i = 0;
    int j = strlen(str)-1;
    int flag = 1;

    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
