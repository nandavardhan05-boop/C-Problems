#include <stdio.h>
int main() {
    int water_level;
    scanf("%d",&water_level);
    if(water_level>90)
    {
        printf("Overflow Warning");
    }
    else if(water_level<0)
    {
        printf("Invalid Input");
    }
    else 
    {
        printf ("Safe Level");
    }
    
    return 0;
}
