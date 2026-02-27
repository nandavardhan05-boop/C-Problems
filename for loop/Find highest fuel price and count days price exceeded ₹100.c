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
        if(N>100)
        {
            count++;
        }
    }
    printf("Highest Price:%d\n",highest);
    printf("High Price Days:%d",count);

    return 0;
}
