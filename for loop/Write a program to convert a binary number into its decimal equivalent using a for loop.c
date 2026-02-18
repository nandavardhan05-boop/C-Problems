#include<stdio.h>
#include<math.h>
int main()
{
    long long binary;
    int decimal=0,remainder;
    int i;
    scanf("%lld",&binary);
    for(i=0;binary!=0;i++)
    {
        remainder=binary%10;
        decimal=decimal+remainder*pow(2,i);
        binary=binary/10;
    }
    printf("%d",decimal);


    return 0;
}
