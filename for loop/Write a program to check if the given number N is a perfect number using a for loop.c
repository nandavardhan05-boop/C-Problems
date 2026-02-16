#include<stdio.h>
int main()
{
    int n, original, remainder;
    int sum = 0;
    scanf("%d", &n);
    original = n;
    for (; N > 0; N /= 10) {
        remainder = N % 10;
        int fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }
        sum += fact;
    }
    if (sum == original)
        printf("Yes");
    else
        printf("No");

    return 0;
}
