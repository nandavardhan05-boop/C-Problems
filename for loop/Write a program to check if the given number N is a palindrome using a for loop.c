#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
     int temp=n;
     int rev=0;
     for(;n!=0;n=n/10){
        int rem = n%10;
        rev=rev*10+rem;
     }
    
    if(temp==rev)
    {
        printf("It is a palindrome");
    }
    else 
    {
        printf ("It is not a palindrome");
    }
    return 0;
}
