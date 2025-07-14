#include <math.h>
#include <stdio.h>

// ポインタをswap
void swap(int *a, int *b)
{
    double c = *a;
    *a = *b;
    *b = c;
}
void fswap(double *a, double *b)
{
    double c = *a;
    *a = *b;
    *b = c;
}

// a_ii ~ a_33 を LU分解
void lu(double a[4][4], double b[4], double l[4][4], double u[4][4], int n)
{
    if (n >= 4)
        return;
    int max = n;
    for (int i = n + 1; i < 4; i++)
        if (fabs(a[i][n]) > fabs(a[max][n]))
            max = i;
    for (int i = n; i < 4; i++)
        fswap(&a[n][i], &a[max][i]);
    for (int i = 0; i < n; i++)
        fswap(&l[n][i], &l[max][i]);
    fswap(&b[n], &b[max]);
    for (int i = n; i < 4; i++)
        u[n][i] = a[n][i];
    for (int i = n; i < 4; i++)
        l[i][n] = a[i][n] / a[n][n];
    for (int i = n + 1; i < 4; i++)
        for (int j = n + 1; j < 4; j++)
            a[i][j] -= l[i][n] * u[n][j];
    lu(a, b, l, u, n + 1);
    return;
}

// 方程式の解を求める
void solve(double a[4][4], double b[4], double x[4])
{
    double l[4][4], u[4][4], c[4];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            l[i][j] = u[i][j] = i == j ? 1. : 0.;
    // A = LU
    lu(a, b, l, u, 0);
    // Lc = b
    for (int i = 0; i < 4; i++)
    {
        c[i] = b[i];
        for (int j = 0; j < i; j++)
            c[i] -= l[i][j] * c[j];
    }
    // Ux = c
    for (int i = 3; i >= 0; i--)
    {
        x[i] = c[i];
        for (int j = i + 1; j < 4; j++)
            x[i] -= u[i][j] * x[j];
        x[i] /= u[i][i];
    }
    return;
}

int main()
{
    double a1[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
    double b1[4] = {1, 2, 3, 4};
    double x1[4];
    solve(a1, b1, x1);
    printf("x = {%.6f, %.6f, %.6f, %.6f}\n", x1[0], x1[1], x1[2], x1[3]);

    double a2[4][4] = {{0, 3, 4, 1}, {3, 2, 2, 2}, {5, 6, 2, 3}, {4, 8, 5, 2}};
    double b2[4] = {20, 19, 27, 14};
    double x2[4];
    solve(a2, b2, x2);
    printf("x = {%.6f, %.6f, %.6f, %.6f}\n", x2[0], x2[1], x2[2], x2[3]);

    return 0;
}
