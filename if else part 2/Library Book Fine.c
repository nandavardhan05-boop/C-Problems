#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    if(days>0&&days<=7)
    {
        printf("No Fine");
    }
    else if(days<0)
    {
        printf("Invalid Inout");
    }
    else 
    {
        printf("Fine Applied");
    }
    
    return 0;
}
