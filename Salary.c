#include <stdio.h>
int main() {
    int hours;
    char ch;
    scanf("%d",&hours);
    scanf("%c",&ch);
    
    if((ch=='m'||ch=='M')&&(hours>0&&hours<=8))
    {
        printf("Total salary %d",hours*80);
    }
    else if((ch=='m'||ch=='M')&&(hours>8))
    {
        printf("Total salary %d",(hours*100)-(hours*80));
    }
     else if((ch=='f'||ch=='F')&&(hours>0&&hours<=8))
    {
        printf("Total salary %d",hours*60);
    }
    else if((ch=='f'||ch=='F')&&(hours>8))
    {
        printf("Total salary %d",(hours*100)-(hours*60));
    }
    else 
    {
        printf("Invalid Input");
    }

    
    return 0;
}
error in this code
