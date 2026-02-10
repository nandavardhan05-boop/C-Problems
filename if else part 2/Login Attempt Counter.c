#include <stdio.h>
int main() {
    int  attempt;
    scanf("%d",& attempt);
    if(attempt>0&&attempt<4)
    {
        printf("Login Allowed");
    }
    else if(attempt<0)
    {
        printf("Invalid Input");
    }
    else 
    {
        printf("Account Locked");
    }
    
    return 0;
}
