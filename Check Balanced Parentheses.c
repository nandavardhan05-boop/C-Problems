#include <stdio.h>

int main() {
    char str[] = "((()))";
    int count = 0;

    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]=='(')
            count++;
        else if(str[i]==')')
            count--;

        if(count<0) {
            printf("Not Balanced");
            return 0;
        }
    }

    if(count==0)
        printf("Balanced");
    else
        printf("Not Balanced");

    return 0;
}
