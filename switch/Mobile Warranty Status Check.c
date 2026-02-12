#include <stdio.h>
int main() {
    int warranty_category;
    scanf("%d",&warranty_category);
    switch(warranty_category)
    {
        case 1:
        printf("Under Warranty");
        break;
        case 2:
        printf("Limited Warranty");
        break;
        case 3:
        printf("Out of Warranty");
        break;
        default:
        printf("Invalid Input");
    }
    
    return 0;
}
