#include <stdio.h>
int main() {

    int marks1,marks2,marks3,marks4,marks5,marks6;
    printf("Enter marks between 0 to 100");
    scanf("%d %d %d %d %d %d",&marks1,&marks2,&marks3,&marks4,&marks5,&marks6);
    int total=marks1+marks2+marks3+marks4+marks5+marks6;
    int percentage;
    percentage=total*100/600;
    if(percentage>=95&&percentage<=100)
    {
        printf("A");
    }
    else if(percentage>=85&&percentage<95)
    {
        printf("B");
    }
     else if(percentage>=75&&percentage<85)
    {
        printf("C");
    }
     else if(percentage>=65&&percentage<75)
    {
        printf("D");
    }
     else if(percentage>=45&&percentage<65)
    {
        printf("E");
    } else if(percentage>0&&percentage<45)
    {
        printf("F");
    } else
    {
        printf("Invalid Input");
    }

    
    return 0;
}