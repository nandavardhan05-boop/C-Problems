#include <stdio.h>
int main() {
    int hours;
    scanf("%d",&hours);
    switch(hours)
    {
        case 1:
        printf("Short Interruption");
        break;
        case 2:
        printf("Medium Interruption");
        break;
        case 3:
        printf("Medium Interruption");
        break;
        case 4:
        printf("Medium Interruption");
        break;
        default:
        if(hours<0)
        {
            printf("Invalid Input");
        }
        else 
        {
        printf("Long Interruption");
        }

    }
    
    return 0;
}
