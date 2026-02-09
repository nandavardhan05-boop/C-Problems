#include <stdio.h>
int main() {
    
    int marks;
    scanf("%d",&marks);
        if(marks>=100&&marks<=90)
        {
            printf("Grade A");
        }
        else if(marks>=75&&marks<90)
        {
            printf("Grade B");
        }
        else if(marks>=65&&marks<75)
        {
            printf("Grade C");
        }
        else if(marks >=35&&marks<65)
        {
            printf("Grade D");
        }
        else if(marks>0&&marks<35)
        {
            printf("Fail");
        }
        else {
            printf("Invalid Input");
        }
    return 0;
}
