#include <stdio.h>
int main() {
    int lonetype;
    scanf("%d",&lonetype);
    int creditscore;
    scanf("%d",&creditscore);

    switch(lonetype)
    {
        case 1:
        if(creditscore>=700)
        {
            printf("Approved");
        }
        else if(creditscore>=650&&creditscore<=699)
        {
            printf("Manual Review");
        }
        break;

        case 2:
        if(creditscore>=700)
        {
            printf("Approved");
        }     
        else 
        {
            printf("Rejected");
        }
        break;
        default:
        printf("Invalid Input");
        break;

    }
    
    return 0;
}
