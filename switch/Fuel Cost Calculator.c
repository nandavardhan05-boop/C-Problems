#include <stdio.h>
int main() {
    int fueltype;
    scanf("%d",&fueltype);
    int litres;
    scanf("%d",&litres);
    switch(fueltype)
    {
        case 1:
        printf(" Fuel Cost ₹%d",litres*105);
        break;
        case 2:
        printf(" Fuel Cost ₹%d",litres*92);
        break;
        case 3:
        printf(" Fuel Cost ₹%d",litres*85);
        break;
        default:
        printf("Invalid Input");

    }
    
    return 0;
}
