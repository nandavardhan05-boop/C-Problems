 #include <stdio.h>
#include <stdlib.h>
int main() {
    int rows = 11;
    int cols = 10;
    for (int i = 1; i <= rows; i++) {
        int left = abs(6 - i);
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows) {
                printf("*");
            }
            else if (left == 0) {  
                if (j == 1 || j == cols)
                    printf("*");
                else
                    printf(" ");
            }
            else {                              
                if (j <= left || j > cols - left)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
