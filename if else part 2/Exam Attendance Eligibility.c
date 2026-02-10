#include <stdio.h>
int main() {
    int percentage;
    scanf("%d",&percentage);
    if(percentage>=75&&percentage<=100)
    {
        printf("Eligible for Exam");
    }
    else if(percentage<0)
    {
        printf("Invalid Input");
    }
    else 
    {
        printf("Not Eligible");
    }
    
    return 0;
}
