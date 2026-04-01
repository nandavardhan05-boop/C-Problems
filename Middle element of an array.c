#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n % 2 == 1) {
        printf("Middle element: %d\n", arr[n/2]);
    } else {
        printf("Middle elements: %d and %d\n", arr[(n/2)-1], arr[n/2]);
    }

    return 0;
}
