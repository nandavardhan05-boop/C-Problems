#include <stdio.h>
int main() {
    int roomtype;
    scanf("%d",&roomtype);
    switch(roomtype)
    {
        case 1:
        printf("₹80000");
        break;
        case 2:
        printf("₹60000");
        break;
        case 3:
        printf("₹45000");
        break;
        default:
        printf("Invalid Input");
        
    }
    
    return 0;
}
