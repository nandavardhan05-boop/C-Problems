#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if(age>=18&&age<=70)
    {
        printf("Eligible");
    }
    else if(age<0)
    {
        printf("Invalid Input");
    }
    else 
    {
        printf("Not Eligible");
    }
    
    return 0;
}
