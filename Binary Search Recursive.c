#include <stdio.h>

int binary(int arr[], int low, int high, int key) {
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(arr[mid] == key)
        return mid;

    if(key < arr[mid])
        return binary(arr, low, mid-1, key);

    return binary(arr, mid+1, high, key);
}
