#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int N,sum=0,count=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        sum=sum+N;

        if(N>50)
        {
            count++;
        }
    }
    printf("Total Errors:%d\n",sum);
    printf("Critical Hours:%d",count);
    return 0;
}
