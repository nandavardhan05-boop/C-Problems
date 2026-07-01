#include <stdio.h>

int search(int arr[], int n, int key) {
    for(int i=0;i<n;i++)
        if(arr[i] == key)
            return i;

    return -1;
}

int main() {
    int arr[] = {10,20,30,40,50};

    printf("%d", search(arr,5,30));
}
