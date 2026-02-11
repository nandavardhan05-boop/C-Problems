#include <stdio.h>
int main() {
    int marks,attendance;
    scanf("%d %d",&attendance,&marks);
    if(attendance>=75&&attendance<=100)
    {
        if(marks>=75&&marks<=100)
        {
            printf("Distinction");
        }
        else if(marks>=50&&marks<=74)
        {
            printf("Pass");
        }
        else if(marks>0&&marks<50)
        {
            printf("Fail");
        }
        else 
        {
            printf("Invalid Input");
        }

    }
    else if(attendance<75&&attendance>0)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid Input ");
    }
    
    return 0;
}
