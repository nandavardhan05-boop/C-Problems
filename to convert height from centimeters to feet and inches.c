#include <stdio.h>

int main()
{
    int cm;
    double inches, feet;

    scanf("%d", &cm);

    inches = cm / 2.54;
    feet = inches / 12;

    printf("%.2f\n", inches);
    printf("%.2f", feet);

    return 0;
}
