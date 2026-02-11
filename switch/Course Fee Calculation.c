#include <stdio.h>
int main() {
        int mode;
         char ch;
        scanf("%d\n%c",&mode,&ch);
         
         
        switch(mode)
        {
            case 1:
            if(ch=='R')
            {
                printf("₹5000");
            }
            else if(ch=='S')
            {
                printf("₹3000");
            }
            break;
            case 2:
            if(ch=='R')
            {
                printf("₹9000");
                
            }
            else if(ch=='S')
            {
                printf("₹7000");
            }
            break;

            default:
            printf("Invalid Input");
            break;
        }
    return 0;
}
