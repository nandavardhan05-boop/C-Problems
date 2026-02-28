#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int N,count=0,minimum=100000;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        if(N<minimum)
        {
            minimum=N;
        }

        if(N<210)
        {
            count++;
        }
    }
    printf("Minimum Voltage:%d\n",minimum);
    printf("Low Voltage Events:%d",count);
    return 0;
}
