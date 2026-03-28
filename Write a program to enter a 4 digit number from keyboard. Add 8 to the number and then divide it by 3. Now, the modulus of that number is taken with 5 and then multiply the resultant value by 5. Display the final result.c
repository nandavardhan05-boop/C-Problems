#include <stdio.h>

int main()
{
    int n;
    double result;

    scanf("%d", &n);

    result = ((n + 8) / 3) % 5;
    result = result * 5;

    printf("%.6lf", result);

    return 0;
}
