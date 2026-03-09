 #include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int main() {
    int n = 4;
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int dist_top = i;
            int dist_bottom = size - 1 - i;
            int dist_left = j;
            int dist_right = size - 1 - j;
            int min_dist = min(min(dist_top, dist_bottom), min(dist_left, dist_right));
            int value_to_print = n - min_dist;
            printf("%d ", value_to_print);
        }
        printf("\n");
    }

    return 0;
}
