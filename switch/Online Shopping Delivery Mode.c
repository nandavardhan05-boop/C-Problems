#include <stdio.h>
int main() {
    int deliverymode;
    scanf("%d",&deliverymode);
    
    switch(deliverymode)
    {
        case 1:
        printf("₹40");
        break;
        case 2:
        printf("₹120");
        break;
        case 3:
        printf("₹0");
        break;
        default :
        printf("Invalid Input");

    }
    
    return 0;
}
