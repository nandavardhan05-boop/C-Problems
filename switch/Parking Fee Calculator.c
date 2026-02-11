#include <stdio.h>
int main() {
    int Vehicle_Type;
    scanf("%d",&Vehicle_Type);
    int Parking_Hours;
    scanf("%d",&Parking_Hours);

    switch(Vehicle_Type)
    {
        case 1:
        printf("Parking Fee ₹%d",Parking_Hours*10);
        break;
        case 2:
        printf("Parking Fee ₹%d",Parking_Hours*20);
        break;
        default :
        printf("Invalid Input");
        break;
    }

    
    return 0;
}
