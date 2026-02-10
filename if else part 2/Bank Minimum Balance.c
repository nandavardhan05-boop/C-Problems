#include <stdio.h>
int main() {
    int amount;
    scanf("%d",&amount);
    if(amount>0&&amount<1000)
    {
        printf("Low Balance");
    }
    else if(amount<0)
    {
        printf("Invalid Input ");
    }
    else 
    {
        printf("Sufficient Balance");
    }
    

    return 0;
}
