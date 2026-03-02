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
        if(n>=N)
        {
            n=n-N;
            count++;
        }
        else 
        {
            break;
        }
    }
    printf("Remaining Data:%d\n",n);
    printf("Successful Days:%d",count);
    return 0;
}
