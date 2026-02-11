#include <stdio.h>
int main() {
    int plantype;
    scanf("%d",&plantype);
    float dataused;
    scanf("%f",&dataused);
    switch(plantype)
    {
        case 1:
        if(dataused<=1)
        {
            printf("Normal speed");
        }
        else if(dataused>1)
        {
            printf("Speed Reduced");
        }
        break;

        case 2:
        if(dataused<=2)
        {
            printf("Normal speed");
        }
        else if(dataused>2)
        {
            printf("Extra Charges Applied");
        }
        break;
        default:
        printf("Invalid Input");
        break;

    }
    
    return 0;
}
