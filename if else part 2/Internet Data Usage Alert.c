#include <stdio.h>
int main() {
    float GB;
    scanf("%f",&GB);
    if(GB<2.5)
    {
        printf("Data within limit");
    }
    else 
    {
        printf("Data limit exceeded");
    }
    
    return 0;
}
