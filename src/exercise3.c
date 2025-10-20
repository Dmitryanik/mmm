#include <stdio.h>
#include <stdlib.h>

void rotate_right(double arr[], int n, int k) {
    k = k % n;
    if (k < 0) k += n;
    
    double temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void rotate_left(double arr[], int n, int k) {
    k = -k % n;
    if (k < 0) k += n;
    rotate_right(arr, n, k);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <K>\n", argv[0]);
        return 1;
    }
    
    int k = atoi(argv[1]);
    double numbers[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);
    }
    
    if (k >= 0) {
        rotate_right(numbers, 10, k);
    } else {
        rotate_left(numbers, 10, k);
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%g ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}