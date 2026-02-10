#include <stdio.h>
int main() {
    int password_length;
    scanf("%d",&password_length);
    if(password_length>=8)
    {
        printf("Strong password");
    }
    else {
        printf("Weak password");
    }
    
    return 0;
}
