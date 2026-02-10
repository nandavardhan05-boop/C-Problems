#include <stdio.h>
int main() {
    int marks,income;
    scanf("%d %d",&marks,&income);
    if((marks>=85&&marks<=100)&&(income<=300000&&income>0))
        {
            printf("Eligible");
        }
        else if(marks<0&&income<0)
        {
            printf("Invalid Input");
        }
        else 
        {
            printf("Not Eligible");
        }

    return 0;
}
