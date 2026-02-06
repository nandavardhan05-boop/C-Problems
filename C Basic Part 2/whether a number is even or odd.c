#include<stdio.h>
int main()
{
    int a ;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("EVEN");
    }
    else if(a<0)
    {
        printf("Invalid Input ");
    }
    else {
        printf("ODD");
    }
    return 0;
}
