#include <stdio.h>

int main() {
    int n = 16;

    if(n > 0 && (n & (n - 1)) == 0)
        printf("Power of 2");
    else
        printf("Not Power of 2");

    return 0;
}
