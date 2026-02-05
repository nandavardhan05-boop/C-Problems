 #include <stdio.h>

int main() {
    int value, updatedvalue;
    scanf("%d %d", &value, &updatedvalue);
    value = updatedvalue;
    printf("%d\n", value);
    return 0;
}
