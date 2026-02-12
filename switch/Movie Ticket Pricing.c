#include <stdio.h>
int main() {
    int seattype;
    scanf("%d",&seattype);
    int showtime;
    scanf("%d",&showtime);
    switch(seattype)
    {
        case 1:
        if(showtime>0&&showtime<18)
        {
            printf("Ticket Price ₹150");
        }
        else if(showtime>=18)
        {
            printf("Ticket Price ₹200");
        }
        else 
        {
            printf("Invalid Input");
        }
        break;

        case 2:
        if(showtime>0&&showtime<18)
        {
            printf("Ticket Price ₹250");
        }
        else if(showtime>=18)
        {
            printf("Ticket Price ₹300");
        }
        else 
        {
            printf("Invalid Input");
        }
        break;

        default:
        printf("Invalid Input");
    }
    return 0;
}
