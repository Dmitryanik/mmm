#include <stdio.h>

int main() {
    double numbers[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);
    }
    
    for (int i = 9; i >= 0; i--) {
        printf("%g ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}

