#include <math.h>
#include <stdio.h>

double f(double x)
{
    return x * x;
}

double g(double x)
{
    return 2 * x;
}

double newton(double x0, double delta, int limit)
{
    double x = x0;
    for (int i = 0; i < limit || fabs(f(x)) >= delta; i++)
        x -= f(x) / g(x);
    return x;
}

int main()
{
    double delta = 0.000001;
    double x = newton(10.0, delta, 10);
    if (fabs(f(x)) < delta)
        printf("OK\n");
    else
        printf("NG\n");
    if (fabs(f(x)) < delta)
        printf("OK\n");
    else
        printf("NG\n");
    return 0;
}
