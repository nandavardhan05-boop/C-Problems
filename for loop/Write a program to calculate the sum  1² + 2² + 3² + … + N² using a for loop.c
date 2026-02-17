#include <stdio.h>
int main() {

    int n,i;
    scanf("%d",&n);
    long long sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("%lld",sum);
    
    return 0;
}
