#include <stdio.h>
int main() {
    int calltype;
    scanf("%d",&calltype);
    int minutes;
    scanf("%d",&minutes);
    switch(calltype)
    {
        case 1:
        if(minutes>0)
        {
            printf("₹%d",minutes*1);
        }
        else 
        {
            printf("Invalid Input");
        }
        break;

        case 2:
        if(minutes>0)
        {
            printf("₹%d",minutes*3);
        }
        else 
        {
            printf("Invalid Input");
        }
        break;

        case 3:
        if(minutes>0)
        {
            printf("₹%d",minutes*10);
        }
        else 
        {
            printf("Invalid Input");
        }
        break;
        default:
        printf("Invalid Input");
        break;
    }

    
    return 0;
}
