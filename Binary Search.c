#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int low=0, high=4, key=3;

    while(low<=high) {
        int mid=(low+high)/2;

        if(arr[mid]==key) {
            printf("Found");
            break;
        }

        else if(arr[mid]<key)
            low=mid+1;

        else
            high=mid-1;
    }
}
