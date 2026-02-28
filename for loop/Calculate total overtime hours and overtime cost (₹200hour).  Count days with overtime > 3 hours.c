#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int N,sum=0,count=0,result;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        sum=sum+N;
        result=sum*200;
        if(N>3)
        {
            count++;
        }
    }
    printf("Total Overtime Hours:%d\n",sum);
    printf("Overtime Cost:%d\n",result);
    printf("Heavy Overtime Days:%d",count);
    
    return 0;
}
