#include <stdio.h>
int main() {
    int batterypercent;
    int n;
    int N,sum=0;
    scanf("%d",&batterypercent);
    scanf("%d",&n);
    int drain;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&drain);
        batterypercent=batterypercent-drain;

        if(batterypercent<0)
        {
            batterypercent=0;
        }
    }
    printf("Remaining Battery:%d",batterypercent);

    
    return 0;
}
