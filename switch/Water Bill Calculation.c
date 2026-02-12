#include <stdio.h>
int main() {
    int connection_type;
    scanf("%d",&connection_type);
    int units;
    scanf("%d",&units);

    switch(connection_type)
    {
        case 1:
        if(units>0&&units<=30)
        {
            printf("₹%d",5*units);
        }
        else if(units>30)
        {
            printf("₹%d",(units-30)*8+5*30);
        }
        else 
        {
            printf("Invalid Input");
        }
        break;

        case 2:
         if(units>0)
        {
            printf("₹%d",10*units);
        }
        else 
        {
            printf("Invalid Input");
        }
        break;
        default :
        printf("Invalid Input");
        break;
    }

    return 0;
}
