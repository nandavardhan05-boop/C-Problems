#include <stdio.h>

int main() {
    char a[20]="Hello ";
    char b[]="World";

    int i=6, j=0;

    while(b[j] != '\0') {
        a[i]=b[j];
        i++;
        j++;
    }

    a[i]='\0';

    printf("%s", a);
}
