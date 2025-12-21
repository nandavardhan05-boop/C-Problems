#include<stdio.h>
int main()
{
      int age;
      scanf("%d",&age);
      if(age>=18)
      {
          printf("Eligible to vote.");
      }
      else if(age>0&&age<18)
      {
          printf("Not eligible to vote.");
      }
      else {
          printf("Invalid input");
      }
      
return 0;
}
