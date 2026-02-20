#include <stdio.h>

int main() {
    int n;
    int amount, total = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &amount);
        total += amount;
    }

    if (total <= 10000) {
        printf("Approved");
    } else {
        printf("Limit Exceeded");
    }

    return 0;
}
