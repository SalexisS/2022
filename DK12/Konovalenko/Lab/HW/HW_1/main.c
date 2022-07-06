#include "dk_tool.h"

void main()
{
    int x, y, n;
    printf("Size matrix [x][y]\n");
    printf("[x]: ");
    scanf("%d", &x);
    printf("[y]: ");
    scanf("%d", &y);
    int mat[x][y];
    printf(" Number multiplication: ");
    scanf("%d", &n);
    Matrix(x, y, mat);
    Result(x, y, n, mat);
}
