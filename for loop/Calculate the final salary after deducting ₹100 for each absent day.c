#include <stdio.h>
int main() {
    int salary;
    int absentDays;
    scanf("%d",&salary);
    scanf("%d",&absentDays);
    for(int i=1;i<=absentDays;i++)
    {
        salary-absentDays*100;
    }
    printf("Final salary %d",salary-absentDays*100);
    
    return 0;
}
