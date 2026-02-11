#include <stdio.h>
int main() {
    int plan,pay=0,cashback=0;
    scanf("%d",&plan);
    int payment_type;
    scanf("%d",&payment_type );
    int amount1=199,amount2=399;
    switch(plan){
        case 1:
        if(payment_type==11||payment_type==12)
        {
          cashback=20;
        }
        else if(payment_type==13)
        {
             cashback=0;
        }
        printf("pay %d",pay=amount1-cashback);
        break;
        case 2:
        if(payment_type==11||payment_type==12)
        {
            cashback=20;

        }
        else if(payment_type==13)
        {
             cashback=0;
        }
            printf("pay %d",pay=amount2-cashback);
        break;
        default:
        printf("Invalid Input");
    }
    return 0;
}
