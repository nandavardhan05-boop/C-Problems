#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int N,sum=0,count=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        sum=sum+N;

        if(N>50000)
        {
            count++;
        }
    }
    printf("Total Revenue:%d\n",sum);
    printf("Target Days:%d",count);
    
    return 0;
}
