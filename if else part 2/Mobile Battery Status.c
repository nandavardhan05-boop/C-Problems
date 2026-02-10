#include <stdio.h>
int main() {
    int battery;
    scanf("%d",&battery);
    if(battery>=20&&battery<=100)
    {
        printf("Battery OK");
    }
    else if(battery<0)
    {
        printf("Invalid Input ");
    }
    else 
    {
        printf("Low Battery");
    }
    
    return 0;
}
