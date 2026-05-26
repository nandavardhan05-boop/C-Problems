#include <stdio.h>

int main() {
    int arr[] = {10, 45, 22, 89, 67};
    int max = arr[0];

    for(int i=1; i<5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest = %d", max);
}
