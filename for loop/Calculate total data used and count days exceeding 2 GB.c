#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int n,count=0,sum=0;
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&n);
        sum=sum+n;

        if(n>2)
        {
            count++;
        }
    }
    printf("Total Data:%d\n",sum);
    printf("High Usage Days:%d",count);
    return 0;
}
