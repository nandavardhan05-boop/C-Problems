#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int N,count=0;
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&N);
            n=n-N;
        if(n<0)
        {
            count++;
        }
    }
    printf("Remaining Capacity:%d\n",n);
    printf("Overflow Days:%d",count);
    
    return 0;
}
