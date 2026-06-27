#include <stdio.h>

int largest(int arr[], int n) {
    int max = arr[0];

    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];

    return max;
}

int main() {
    int arr[] = {5, 9, 12, 4, 7};

    printf("%d", largest(arr, 5));
}
