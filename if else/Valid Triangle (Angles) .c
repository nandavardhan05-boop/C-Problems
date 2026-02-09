#include <stdio.h>
int main() {
    int sum;
    int a ,b,c ;
        scanf("%d%d%d",&a,&b,&c);
        sum=a+b+c;
        if(sum==180){
            printf("Valid triangle ");
        }
        else 
        {
            printf("Invalid triangle");
        }
    return 0;
}
