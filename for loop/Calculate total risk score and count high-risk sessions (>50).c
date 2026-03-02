#include <stdio.h>
int main() {
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
    
    printf("Total Risk:%d\n",sum);
    printf("High Risk Sessions:%d",count);
    return 0;
}
