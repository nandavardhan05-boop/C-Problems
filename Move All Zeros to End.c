#include <stdio.h>

int main() {
    int arr[] = {1, 0, 3, 0, 5};
    int n = 5;
    int pos = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0)
            arr[pos++] = arr[i];
    }

    while(pos < n)
        arr[pos++] = 0;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
