/* Я не зрозумів що саме від мене хочуть у варіанті 6б
 тому я вирішив робити варіант 1*/
#include "dk_tool.h"

void main()
{
    int x, y, n;
    printf("Вкажіть розмір матриці [x][y]\n");
    printf("[x]: ");
    scanf("%d", &x);
    printf("[y]: ");
    scanf("%d", &y);
    int mat[x][y];
    printf("Вкажіть число на яке хочете помножити\n");
    printf(" Число: ");
    scanf("%d", &n);
    Matrix(x, y, mat);
    printMatrix(x, y, mat);
    printResult(x, y, mat);
}