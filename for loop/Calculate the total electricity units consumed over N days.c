#include <stdio.h>

int main() {
    int N, i, unit, total = 0;
    
    scanf("%d", &N);  
    
    for(i = 0; i < N; i++) {
        scanf("%d", &unit); 
        total += unit;       
    }
    
    printf("Total Units: %d", total);
    
    return 0;
}
