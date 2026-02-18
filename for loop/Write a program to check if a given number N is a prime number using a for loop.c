  #include <stdio.h>

int main() {
    int n, i, j, count = 0, isPrime;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;  
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
    }
            if (isPrime == 1){
             printf("%d is a Prime number.\n", n);
            }
            else{
             printf("%d is NOT a Prime number.\n", n);
            }
    return 0;
}
