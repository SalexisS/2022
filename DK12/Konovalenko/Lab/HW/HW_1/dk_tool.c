#include <stdio.h>
#include "dk_tool.h"

int Matrix(int x, int y, int mat[x][y])
{
    printf("Fill in the matrix\n");
    int a, b;
    for (a = 0; a < x; a++)
    {
        for (b = 0; b < y; b++)
        {
            printf("Number[%d][%d] = ", a + 1, b + 1);
            scanf("%d", &mat[a][b]);
        }
    }
     return mat[x][y];
}
void Result(int x, int y, int n, int mat[x][y])
{
    printf("Multiplication matrix: \n");
    int a, b;
      for (a = 0; a < x; a++)
      {
            for (b = 0; b < y; b++)
            {
                int matMultiplication[a][b];
                matMultiplication[a][b] = (mat[a][b])*n;

                printf("%d  ", matMultiplication[a][b]);
            }
            printf("\n");
      }
}
