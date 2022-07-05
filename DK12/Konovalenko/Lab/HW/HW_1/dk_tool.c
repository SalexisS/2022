#include <stdio.h>
#include "dk_tool.h"

int Matrix(int x, int y, int mat[x][y])
{
    printf("Заповніть матрицю\n");
    int a, b;
    for (a = 0; a < x; a++)
    {
        for (b = 0; b < y; b++)
        {
            printf("Число[%d][%d] = ", a + 1, b + 1);
            scanf("%d", &mat[a][b]);
        }
    }
    return mat[x][y];

    printf("Задана матриця: \n");
    int a, b;
    for (a = 0; a < x; a++)
    {
        for (b = 0; b < y; b++)
        {
            printf("%d  ", mat[a][b]);
        }
        printf("\n");
    }
}
void printResult(int x, int y, int mat[x][y])
{
    mat[x][y] = mat[x][y] * n;

    printf("Помножена матриця: \n");
    int a, b;
    for (a = 0; a < x; a++)
    {
        for (b = 0; b < y; b++)
        {
            printf("%d  ", mat[x][y]);
        }
        printf("\n");
    }
}