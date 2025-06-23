#include <stdio.h>

void matmul(int a[3][3], int b[3][3], int c[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
        }
    }
    return;
}

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int c[3][3];
    matmul(a, b, c);
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }
    /* expects
        84 90 96
        201 216 231
        318 342 366
    */
    return 0;
}