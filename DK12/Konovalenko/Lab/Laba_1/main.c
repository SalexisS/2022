#include "math.h"
/* Коноваленко Олексій ДК-12
   Лаба 1        Варіант 6 */

void main()
{

    printf("Ви відкрили програму для обчислення функції Q\n");
    printf("Вкажіть змінні A та B.\n 
    Обмеження:\n 
    1) A < 10\n 
    2) A повинна бути додатньою, тобто A > 0\n 
    3) B не може дорівнювати -2A\n 
    Кількість чисел після коми обмежена двома\n");
    int a, b;
    printf("A:");
    scanf("%d", &a);
    printf("B:");
    scanf("%d", &b);
    result(a, b);
}