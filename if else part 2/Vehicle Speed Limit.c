#include <stdio.h>
int main() {
    int speed;
    scanf("%d",&speed);
    if(speed<=80&&speed>0)
    {
        printf("Within Speed Limit");
    }
    else 
    {
        printf("Speed Limit Exceeded");
    }
    
    return 0;
}
