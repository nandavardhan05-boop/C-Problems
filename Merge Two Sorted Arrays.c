#include <stdio.h>

int main() {
    int a[] = {1,3,5};
    int b[] = {2,4,6};

    int i=0,j=0;

    while(i<3 && j<3) {
        if(a[i] < b[j])
            printf("%d ", a[i++]);
        else
            printf("%d ", b[j++]);
    }

    while(i<3) printf("%d ", a[i++]);
    while(j<3) printf("%d ", b[j++]);

    return 0;
}
