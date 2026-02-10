#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>0&&marks<=35)
    {
        printf("Fail");

    }
    else if(marks>35&&marks<85)
    {
        printf("Pass");
    }
    else if(marks>=85&&marks<=100)
    {
        printf("Distinction");
    }
    else 
    {
        printf("Invalid Input ");
    }
    
    return 0;
}
