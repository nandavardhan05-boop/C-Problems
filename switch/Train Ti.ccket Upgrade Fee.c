#include <stdio.h>
int main() {
    int class_type;
    scanf("%d",&class_type);
    switch(class_type)
    {
        case 1:
        printf("Upgrade Fee ₹300");
        break;
        case 2:
        printf("Upgrade Fee ₹800");
        break;
        case 3:
        printf("Upgrade Fee ₹1500");
        break;
        default :
        printf("Invalid Input");
    }
    
    return 0;
}
