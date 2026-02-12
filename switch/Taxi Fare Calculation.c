#include <stdio.h>
int main() {
    int vehicletype;
    scanf("%d",&vehicletype);
    int distance;
    scanf("%d",&distance);
    switch(vehicletype)
    {
        case 1:
        printf("₹%d",distance*10);
        break;
        case 2:
        printf("₹%d",distance*15);
        break;
        case 3:
        printf("₹%d",distance*20);
        break;  
        default :
        printf("Invalid Input");

    }
    return 0;
}
