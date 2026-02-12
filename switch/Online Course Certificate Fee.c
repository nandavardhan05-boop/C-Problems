#include <stdio.h>
int main() {
    int coursetype;
    scanf("%d",&coursetype);
    switch(coursetype)
    {
        case 1:
        printf("Certificate Fee ₹0");
        break;
        case 2:
        printf("Certificate Fee ₹500");
        break;
        default :
        printf("Invalid Input");
    }
    
    return 0;
}
