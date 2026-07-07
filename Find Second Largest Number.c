#include <stdio.h>

int main() {
    int arr[] = {10, 45, 23, 89, 67};
    int largest = arr[0];
    int second = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}
