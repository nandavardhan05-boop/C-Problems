#include <stdio.h>
int main() {
    int user_role;
    scanf("%d",&user_role);
    int login_time;
    scanf("%d",&login_time);
    
    switch(user_role)
    {
        case 1:
        if(login_time>0){
        printf("Full access anytime");
        }
        else 
        {
            printf("Invalid Input ");
        }
        break;

        case 2:
        if(login_time>0&&login_time<=18)
        {
            printf("Limited Access");
        }
        else if(login_time>18)
        {
            printf("Access Denied");
        }
        else 
        {
            printf("Invalid Input");
        }
        break;
        default :
        printf("Invalid Input");
        
    }
    
    return 0;
}
