#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("Number is divisible by 5");
    }    
    else{
        printf("Not divisible by 5");
    }
    return 0;
}
