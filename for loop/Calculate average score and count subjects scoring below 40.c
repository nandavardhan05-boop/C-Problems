#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int N,sum=0,count=0,average;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        sum=sum+N;
        average=sum/n;

        if(N<40)
        {
            count++;
        }
    }
    printf("Average Score:%d\n",average);
    printf("Failed Subjects:%d",count);
    
    return 0;
}
