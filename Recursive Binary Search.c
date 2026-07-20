#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if(low > high)
        return -1;

    int mid = (low + high)/2;

    if(arr[mid] == key)
        return mid;

    if(key < arr[mid])
        return binarySearch(arr, low, mid-1, key);

    return binarySearch(arr, mid+1, high, key);
}

int main() {
    int arr[] = {10,20,30,40,50};

    printf("%d",
           binarySearch(arr,0,4,40));

    return 0;
}
