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
    qe_solve(1, -4, 3);
    /* expects
        x1 = 3.0
        x2 = 1.0
    */
    qe_solve(1, 2, 1);
    /* expects
        x = -1.0
    */
    qe_solve(2, 2, 1);
    /* expects
        x1 = -0.5 + 0.5i
        x2 = -0.5 - 0.5i
    */
    return 0;
}
