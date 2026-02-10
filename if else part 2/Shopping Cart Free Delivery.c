#include <stdio.h>
int main() {
    int cart_value;
    scanf("%d",&cart_value);
    if(cart_value>=499)
    {
        printf("Free Delivery");
    }
    else if(cart_value<0)
    {
        printf("Invalid Input ");
    }
    else
    {
        printf("Delivery Charges Apply");
    }
    
    return 0;
}
