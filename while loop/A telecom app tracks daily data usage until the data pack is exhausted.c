#include <stdio.h>

int main() {
    int totalData, N;
    int usage[100];
    int i = 0, daysUsed = 0;

    scanf("%d", &totalData);
    scanf("%d", &N);

    for(int j = 0; j < N; j++) {
        scanf("%d", &usage[j]);
    }

    while(i < N && totalData > 0) {
        totalData = totalData - usage[i];
        daysUsed++;

        if(totalData <= 0) {
            totalData = 0;
            break;
        }

        i++;
    }

    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);

    return 0;
}
