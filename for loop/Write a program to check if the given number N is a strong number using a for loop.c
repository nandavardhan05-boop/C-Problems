#include <stdio.h>
int main() {
    int n,r,i,sum=0,fact;
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++){
        fact=fact*i;
        }
        sum=sum+fact;
         n=n/10;
        
    }
        if(temp==sum)
        {
            printf("Strong Number");
        }
        else 
        {
            printf("Not a strong Number");
        }

    

    return 0;
}
