#include <stdio.h>
int main() {
    int days;
    int days_expenses,total=0;
    int count=0;
    scanf("%d", &days);
    for(int i=1;i<=days;i++){ 
        scanf("%d",&days_expenses);
        total = total + days_expenses;
        if(days_expenses>1000)
        {
            count++;
        }
    }
    printf("Total Expense:%d\n",total);
    printf("Overspend Days:%d",count);
    return 0;
}
