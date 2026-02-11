#include <stdio.h>
int main() {
    int accounttype,years;
    scanf("%d%d",&accounttype,&years);
    switch(accounttype)
    {
        case 1:
        printf("Interest 4%");
        break;
        case 2:
        if(years<=3)
        {
            printf("Interest 5%");
        }
        else 
        {
            printf("Interest 7%");
        }
        break;
        default:
        printf("Invalid Input");
    }
    return 0;
}
