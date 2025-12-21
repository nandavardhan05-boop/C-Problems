#include<stdio.h>
int main()
{
    int bill;
    scanf("%d",&bill);
    float total_bill;
    
    if (bill>=5000)
    {
    total_bill=bill-(bill*10/100);    
    }
    else {
        total_bill=bill-(bill*5/100);
    }
    printf("%.0f",total_bill);
    
    return 0;
}