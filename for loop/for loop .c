 #include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0 && i > 10) {
            printf("%d ", i);
        }
    }
    return 0;
}
