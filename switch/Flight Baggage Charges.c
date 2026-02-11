#include <stdio.h>
int main() {
    int flight_class,Extra_Baggage_Charge;
    scanf("%d\n",&flight_class);
    int extra_baggage_weight;
    scanf("%d",&extra_baggage_weight);

    switch(flight_class)
    {

        case 1:
        printf("Extra_Baggage_Charge ₹%d",extra_baggage_weight*300);
        break;

        case 2:
        if(extra_baggage_weight>0&&extra_baggage_weight<=3)
        {
            printf("free");
        }
        else 
        {
            printf("Extra_Baggage_Charge ₹%d",extra_baggage_weight*300-(3*300));
        }
        break;

        default:
        printf("Invalid Input");
        break;
    }
    
    return 0;
}
