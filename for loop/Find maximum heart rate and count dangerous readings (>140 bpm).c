#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int N,highest=-1,count=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        if(N>=highest)
        {
            highest=N;
        }
        if(N>140)
        {
            count++;
        }
    }
    printf("Max Heart Rate:%d\n",highest);
    printf("Danger Readings:%d",count);
    return 0;
}
