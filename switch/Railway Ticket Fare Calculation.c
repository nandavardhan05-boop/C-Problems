#include <stdio.h>
int main() {
    int class ,Fare;
    int age;
    scanf("%d",&class);
    scanf("%d",&age);
    switch(class){
        case 1:
        if(age<12){
            Fare=300-50*300/100;
        }
        else if(age>=60)
        {
            Fare=300-33*300/100;
        }
        printf("Fare %d",Fare);
        break;
        case 2:
        if(age<12)
        {
            Fare=1000-50*1000/100;
        }
        else 
        {
            Fare=1000;
        }
        printf("Fare %d",Fare);
        break;
        default:
        printf("Invalid Input");


    }
    
    return 0;
}
