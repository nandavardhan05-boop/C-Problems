#include <stdio.h>

int main()
{
    long long int num1, num2, num3, num4, temp;

    scanf("%lld %lld %lld %lld", &num1, &num2, &num3, &num4);

    if(num1 < num2) { temp = num1; num1 = num2; num2 = temp; }
    if(num1 < num3) { temp = num1; num1 = num3; num3 = temp; }
    if(num1 < num4) { temp = num1; num1 = num4; num4 = temp; }

    if(num2 < num3) { temp = num2; num2 = num3; num3 = temp; }
    if(num2 < num4) { temp = num2; num2 = num4; num4 = temp; }

    if(num3 < num4) { temp = num3; num3 = num4; num4 = temp; }

    printf("%lld>%lld>%lld>%lld", num1, num2, num3, num4);

    return 0;
}
