#include <stdio.h>
int main(){
float numbers[10];
float sum = 0.0;
for (int i = 0; i < 10; i++){
if (scanf("%f, &numbers[i] !=1){
printf("Ошибка ввода.\n");
return 1;
}
sum+=numbers[i];
}
float average = sum /10.0;
printf("%.2f\n", average);
return 0;
}
