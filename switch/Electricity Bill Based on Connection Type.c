#include <stdio.h>
int main() {
    int connection_type,units,Bill=0;
    scanf("%d %d",&connection_type,&units);
    switch(connection_type){
        case 1:
        if(units>0&&units<=100)
        {
            Bill =(units*3);

        }
        else if(units>100&&units<=1000)
        {
            Bill=(100*3)+(units-100)*5;
        }
        printf(" Bill ₹%d",Bill);
        break;
        case 2:
        if(units>0&&units<=100)
        {
            Bill=(units*7);
        }
        else if(units>100&&units<=1000)
        {
            Bill=(100*7)+(units-100)*10;
        }
            printf(" Bill ₹%d",Bill);
            break;
            
        default :
        printf("Invalid Input");
        break;
    }
      
    return 0;
}
