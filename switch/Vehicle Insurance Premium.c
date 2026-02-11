#include <stdio.h>
int main() {
    int vehicle_category;
    scanf("%d",&vehicle_category);
    int age;
    scanf("%d",&age);
    
    switch(vehicle_category)
    {

        case 1:
        if(age>0&&age<=5)
        {
            printf("₹1500");
        }
        else if(age>5)
        {
            printf("₹2500");
        }
        break;

        case 2:
        if(age>0&&age<=5)
        {
            printf("₹4000");
        }
        else if(age>5)
        {
            printf("₹6000");
        }
        break;
        default:
        printf("Invalid Input ");
        break;
        
    }

    
    return 0;
}
