#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num>0)
    {
        printf("POSITIVE");
    }
    else if(num==0)
    {
        printf("ZERO");
    }
    else 
    {
        printf("NEGATIVE");
    }
    
    
    return 0;
}
