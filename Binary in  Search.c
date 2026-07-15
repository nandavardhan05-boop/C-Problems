#include <stdio.h>

int main() {
    int arr[] = {10,20,30,40,50};
    int key = 40;
    int low = 0, high = 4;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Found at position %d", mid);
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0;
}
