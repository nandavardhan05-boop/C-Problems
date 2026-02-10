#include <stdio.h>
int main() {
    int ticket;
    scanf("%d",&ticket);
    if(ticket==0)
    {
        printf("Waiting List");
    }
    else if(ticket<0)
    {
        printf("Invalid Input ");
    }
    else {
        printf("Confirmed");
    }
    
    return 0;
}
