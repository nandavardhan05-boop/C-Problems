 #include <stdio.h>

int main() {
    int choice;
    int a, b;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            printf("Sum = %d", a + b);
            break;

        case 2:
            printf("Difference = %d", a - b);
            break;

        case 3:
            printf("Product = %d", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Quotient = %d", a / b);
            else
                printf("Error: Division by zero");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
