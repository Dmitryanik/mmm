#include <stdio.h>

#define ROWS_A 10
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 10

int main() {
    double A[ROWS_A][COLS_A];
    double B[ROWS_B][COLS_B];
    double C[ROWS_A][COLS_B];
    
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_A; j++) {
            scanf("%lf", &A[i][j]);
        }
    }
    
    for (int i = 0; i < ROWS_B; i++) {
        for (int j = 0; j < COLS_B; j++) {
            scanf("%lf", &B[i][j]);
        }
    }
    
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            C[i][j] = 0;
            for (int k = 0; k < COLS_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%g ", C[i][j]);
        }
    }
    printf("\n");
    
    return 0;
}