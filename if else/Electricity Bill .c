#include <stdio.h>
int main() {
    float units;
    float bill;
    scanf("%f",&units);
    if(units<=100)
    {
        bill=units*5;
         
    }
    else  
    {
        bill=(100*5)+(units-100)*5;  
    }
     
      printf("Bill Amount =%.2f",bill);
    return 0;
}
