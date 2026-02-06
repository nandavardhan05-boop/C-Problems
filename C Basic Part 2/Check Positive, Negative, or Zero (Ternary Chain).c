  #include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%s", 
        (a > 0) ? "POSITIVE":(a < 0) ? "NEGATIVE" :
                  "ZERO");

    return 0;
}
