#include <stdio.h>
int main() {
    int day ;
    scanf("%d",&day);
    
    if(day==1)
    {
        printf("Monday\n");
        printf("Weekday");
    }
    else if(day==2)
    {
        printf("Tuesday\n");
        printf("Weekday");
    }
    else if(day==3)
    {
        printf("Wednesday\n");
        printf("Weekday");
    }else if(day==4)
    {
        printf("Thursday\n");
        printf("Weekday");
    }else if(day==5)
    {
        printf("Friday\n");
        printf("Weekday");
    }else if(day==6)
    {
        printf("Saturday\n");
        printf("Holiday");
    }else if(day==7)
    {
        printf("Sunday\n");
        printf("Holiday");
    }
    else 
    {
        printf("Invalid Input");
    }
    return 0;
}