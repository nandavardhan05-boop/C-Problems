  #include <stdio.h>

int main() {
    int N = 5; 
    int i, j;
    char startChar;
    for (i = 0; i < N; i++) {
         startChar = 'A' + N - 1 - i;
         for (j = 0; j <= i; j++) {
            printf("%c ", startChar + j);
        }
        printf("\n");
    }
    return 0;
}
