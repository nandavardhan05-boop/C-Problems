#include <stdio.h>
int main() {
    int booktype;
    scanf("%d",&booktype);
    int dayslate;
    scanf("%d",&dayslate);
    switch(booktype)
    {
        case 1:
        if(dayslate>0){
        printf("Late Fee ₹%d",dayslate*2);
        }
        else 
        {
            printf("Invalid Input");
        }
        break;
        case 2:
        if(dayslate>0){
        printf("Late Fee ₹%d",dayslate*5);
        }
        else
        {
            printf("Invalid Input");
        }
        break;
        default :
        printf("Invalid Input");
    }
    
    return 0;
}
