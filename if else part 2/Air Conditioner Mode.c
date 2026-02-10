#include <stdio.h>
int main() {
    int mode;
    scanf("%d",&mode);
    if(mode>0&&mode<=18)
    {
        printf("Heating Mode");
    }
    else if(mode>18&&mode<=25)
    {
        printf("Normal Mode");
    }
    else if(mode>25&&mode<=35)
    {
        printf("Coolong Mode");
    }
    else 
    {
        printf("Invalid Input");
    }
    
    return 0;
}
