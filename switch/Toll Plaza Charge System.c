#include <stdio.h>
int main() {
    int vehicle_type;
    scanf("%d",&vehicle_type);
    int  trips;
    scanf("%d",&trips);
    switch(vehicle_type)
    {
        case 1:
        if(trips==1){
        printf("₹100");
        }
        else if(trips>1&&trips<=30)
        {
            printf("₹800");
        }
        break;

        case 2:
        printf("truckcharges ₹%d",trips*240);
        break;
        default :
        printf("Invalid Input");
        break;
    }
    
    return 0;
}
