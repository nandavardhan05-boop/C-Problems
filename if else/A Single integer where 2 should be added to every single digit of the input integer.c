#include <stdio.h>

int main()
{
    int n, d1, d2, d3, d4;

    scanf("%d", &n);

    d1 = (n / 1000) + 2;
    d2 = ((n / 100) % 10) + 2;
    d3 = ((n / 10) % 10) + 2;
    d4 = (n % 10) + 2;

    printf("%d%d%d%d", d1, d2, d3, d4);

    return 0;
}
