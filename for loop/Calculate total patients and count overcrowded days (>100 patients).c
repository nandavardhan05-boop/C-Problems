#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int N,count=0,sum=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        sum=sum+N;

        if(N>100)
        {
            count++;
        }
    }
    printf("Total Patients:%d\n",sum);
    printf("Overcrowed Days:%d",count);
    
    return 0;
}
