#include <stdio.h>

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int maxSum = arr[0];
    int curr = arr[0];

    for(int i=1;i<9;i++) {
        curr = (arr[i] > curr + arr[i])
               ? arr[i]
               : curr + arr[i];

        if(curr > maxSum)
            maxSum = curr;
    }

    printf("Maximum Sum = %d", maxSum);
    return 0;
}
