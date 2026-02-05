 #include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int ge = (a >= b);
    int le = (a <= b);

    printf("%d %d\n", ge, le);

    return 0;
}
