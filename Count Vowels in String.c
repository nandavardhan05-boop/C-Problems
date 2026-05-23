#include <stdio.h>

int main() {
    char str[] = "programming";
    int count = 0;

    for(int i=0; str[i]; i++) {
        char ch = str[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count++;
    }

    printf("Vowels = %d", count);
}
