#include <stdio.h>

int main() {
    char str[] = "programming";

    for(int i=0; str[i]; i++) {
        int flag = 0;

        for(int j=0; j<i; j++) {
            if(str[i] == str[j]) {
                flag = 1;
                break;
            }
        }

        if(!flag)
            printf("%c", str[i]);
    }
}
