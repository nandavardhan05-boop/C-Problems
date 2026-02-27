#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int n,sum=0,count=0;
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&n);
        sum=sum+n;

        if(n>100)
        {
            count++;
        }
    }
    printf("Total Loss:%d\n",sum);
    printf("High Loss Days:%d",count);
    
    return 0;
}
