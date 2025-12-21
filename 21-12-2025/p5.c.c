
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("It is an even number.");
        
    }
    else if(a%2!=0)
    {
        printf("It is an odd number.");
    }
    else {
        printf("Invalid input!");
        
    }
    return 0;
