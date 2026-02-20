#include <stdio.h>
int main() {
    int month;
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        printf("31 Days\n");
    }
    else if(month==2)
    {
        printf("28 days or 29 days\n");
    }
    else if(month==4||month==6||month==9||month==11)
    {
        printf("30 Days\n");
    }
    else 
    {
        printf("Invalid Input");
    }

    if(month>=1&&month<=3)
    {
        printf("Quadrant 1");
    }
    else if(month>=4&&month<=6)
    {
        printf("Quadrant 2");
    }
    else if(month>=7&&month<=9)
    {
        printf("Quadrant 3");
    }
    else 
    {
        printf("Quadrant 4");
    }
    
    return 0;
}