#include <stdio.h>
int main() {
    int initialCash;
    scanf("%d",&initialCash);
    int n;
    scanf("%d",&n);
    int N,sum=0,count=0,total;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        sum=sum+N;
        total=initialCash-sum;
        
        if(total<5000)
        {
            count++;
        }
    }
    printf("Remaining Cash:%d\n",total);
    printf("Risk Count:%d",count);
    return 0;
}
