#include <stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    int  count=0;
    for(int i=n;i!=0;i=i/10)
    {
        int m=i%10;
        if(m%2!=0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
