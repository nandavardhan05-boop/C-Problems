#include <stdio.h>
int main() {
    int category;
    scanf("%d",&category);
    int distance;
    scanf("%d",&distance);

    switch(category)
    {

        case 1:
        if(distance>0&&distance<=30)
        {
            printf("Eligible");
        }
        else if(distance>30&&distance<=100)
        {
            printf("Eligible with Extra Fee");
        }
        break;

        case 2:
        if(distance>0&&distance<=30)
        {
            printf("Eligible");
        }
        else if(distance>30&&distance<=100)
        {
            printf("Not Eligible ");
        }
        break;
        default :
        printf("Invalid Input");
        break;
    }
    
    return 0;
}
