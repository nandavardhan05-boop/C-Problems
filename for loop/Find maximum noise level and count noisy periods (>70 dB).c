#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int N,count=0,highest=-1;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        if(N>highest){
        highest=N;
        }

        if(N>70)
        {
            count++;
        }
    }
    printf("Maximum Noise:%d\n",highest);
    printf("Noisy Periods:%d",count);
    
    return 0;
}
