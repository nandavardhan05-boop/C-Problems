#include <stdio.h>
int main() {
    int length;
    scanf("%d",&length);
    if(length>0&&length<=5)
    {
        printf("Invalid Email");
    }
    else if(length<0)
    {
        printf("Invalid Input");
    }
    else 
    {
        printf("Valid Email");
    }
    
    return 0;
}
