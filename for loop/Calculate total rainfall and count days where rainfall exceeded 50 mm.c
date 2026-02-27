#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int n;
    int sum=0,count=0;
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&n);
        sum=sum+n;

        if(n>50)
        {
        count++;
        }
    }
        printf("Total Rainfall:%d\n",sum);
        printf("Heavy Rain Days:%d",count);    
    return 0;
}
