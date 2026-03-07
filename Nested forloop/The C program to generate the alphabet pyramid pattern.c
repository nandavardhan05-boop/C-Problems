 #include <stdio.h>

int main() {
    int rows = 4; 
    for (int i = 1; i <= rows; i++) {
         for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            printf("%c", ch++);
        }
        ch -= 2;  
        for (int l = 1; l < i; l++) {
            printf("%c", ch--);
        }
        printf("\n");
    }
    return 0;
}
