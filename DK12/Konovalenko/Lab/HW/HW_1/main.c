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
    printResult(x, y, mat);
}