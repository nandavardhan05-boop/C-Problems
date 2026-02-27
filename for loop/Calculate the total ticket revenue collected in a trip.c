 #include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int N;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&N);
        sum=sum+N;
    }    
    printf("Total Collection:₹%d",sum);
    return 0;
}
