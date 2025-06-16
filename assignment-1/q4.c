#include <math.h>
#include <stdio.h>

void qe_solve(double a, double b, double c)
{
    double D = b * b - 4 * a * c;
    if (D > 0)
    {
        printf("x1 = %.1f\n", (-b + sqrt(D)) / (2 * a));
        printf("x2 = %.1f\n", (-b - sqrt(D)) / (2 * a));
    }
    else if (D == 0)
    {
        printf("x = %.1f\n", (-b) / (2 * a));
    }
    else if (D < 0)
    {
        printf("x1 = %.1f + %.1fi\n", (-b) / (2 * a), (sqrt(-D)) / (2 * a));
        printf("x2 = %.1f - %.1fi\n", (-b) / (2 * a), (sqrt(-D)) / (2 * a));
    }
    return;
}

int main()
{
    qe_solve(1.0, 3.0, 1.0);
    qe_solve(1.0, 2.0, 1.0);
    qe_solve(1.0, 1.0, 1.0);
    return 0;
}
