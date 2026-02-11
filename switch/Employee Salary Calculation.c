#include <stdio.h>
int main() {
    int code,base_salary,salary;
    scanf("%d",&code);
    int experience;
    scanf("%d",&experience);
    switch(code){
        case 1:
        base_salary=50000;
        printf("salary₹%d",salary=experience*5000+base_salary);
        break;
        case 2:
        base_salary=35000;
        printf("salary₹%d",salary=experience*5000+base_salary);
        break;
        default:
        printf("Invalid Input");
        break;

    }
    
    return 0;
}
