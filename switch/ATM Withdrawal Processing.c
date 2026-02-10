#include <stdio.h>
int main() {
    int account_type,balance,withdraw_Amount;
    scanf("%d \n%d \n%d",&account_type,&balance,&withdraw_Amount);
    switch(account_type){
        case 1:
        if(balance>=withdraw_Amount){
            printf("Transaction Successfull");
        }
        break;
        case 2:
        if(withdraw_Amount <=5000)
        {
            printf("Transaction Successfull");
        }
        else 
        {
            printf("Limit Exceeded");
        }
        break;
        default:
        printf("Invalid input");
    }
    
    return 0;
}
