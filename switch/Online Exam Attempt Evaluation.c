#include <stdio.h>
int main() {
    int attempt_number;
    scanf("%d",&attempt_number);
    int marks_obtained;
    scanf("%d",&marks_obtained);
    switch(attempt_number)
    {

        case 1:
        if(marks_obtained>=80&&marks_obtained<=100)
        {
            printf("Excellent");
        }
        else if(marks_obtained>0&&marks_obtained<80)
        {
            printf("Not Qualified");
        }
        break;

        case 2:
        if(marks_obtained>=60&&marks_obtained<=100)
        {
            printf("Good");
        }
        else if(marks_obtained>0&&marks_obtained<60)
        {
            printf("Not Qualified");
        }
        break;
        case 3:
        printf("Needs Improvement");
        break;
        default:
        printf("Invalid Input");
        break;
    }
    
    return 0;
}
