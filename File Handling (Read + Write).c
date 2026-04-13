#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("test.txt", "w");
    fprintf(fp, "Hello C Programming!");
    fclose(fp);

    fp = fopen("test.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}
