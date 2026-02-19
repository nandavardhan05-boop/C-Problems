#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp,count=0,sum=0;
    temp=n;
    for(;temp!=0;temp=temp/10)
    {
        count++;
    }
    temp=n;
    for(;temp!=0;temp=temp/10)
    {
        int rem=temp%10;
        sum=sum+pow(rem,count);
    }
    if(sum==n)
    {
        printf("Amstrong Number");
    }
    else 
    {
        printf("Not Amstrong Number");
    }
    return 0;
}
