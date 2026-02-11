#include <stdio.h>
int main() {

        int speedtype;

        scanf("%d",&speedtype);
                int orderamount;

            scanf("%d",&orderamount);
        switch(speedtype){
            case 1:
                printf("50");
            break;

            case 2:
            if(orderamount<1000)
            {
                printf("100");
            }else{
                printf("Free");
            }
            break;
            default:
            printf("Invalid Input");
        }
        
    return 0;
}
