#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    if(days>=1&&days<=5)
    {
        printf("Weekday");
    }
    else if(days>5&&days<=7)
    {
        printf("Weekend");
    }
    else 
    {
        printf("Invalid Input");
    }
    
    return 0;
}
