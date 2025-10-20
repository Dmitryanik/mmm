#include <stdio.h>

int main() {
    double numbers[10];
    double sum = 0.0;
    
    // Чтение 10 чисел
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }
    
    // Вывод среднего с точностью 2 знака после запятой
    printf("%.2f\n", sum / 10.0);
    
    return 0;
}