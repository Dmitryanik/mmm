#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <X> <K>\n", argv[0]);
        return 1;
    }
    
    double x = atof(argv[1]);
    int k = atoi(argv[2]);
    double numbers[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);
    }
    
    for (int i = 9; i > k; i--) {
        numbers[i] = numbers[i - 1];
    }
    numbers[k] = x;
    
    for (int i = 0; i < 10; i++) {
        printf("%g ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}