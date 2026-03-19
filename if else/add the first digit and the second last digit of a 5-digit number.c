#include <stdio.h>

int main()
{
    int n, first, second_last;

    scanf("%d", &n);

    first = n / 10000;
    second_last = (n / 10) % 10;

    printf("%d", first + second_last);

    return 0;
}
