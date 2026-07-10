#include <stdio.h>

int main() {
    char str[] = "programming";

    for(int i = 0; str[i]; i++) {
        int count = 0;

        for(int j = 0; str[j]; j++) {
            if(str[i] == str[j])
                count++;
        }

        if(count == 1) {
            printf("First Non-Repeated Character = %c", str[i]);
            break;
        }
    }

    return 0;
}
