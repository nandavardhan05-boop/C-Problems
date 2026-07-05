#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int n = 5;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("Duplicate = %d", arr[i]);
            }
        }
    }

    return 0;
}
