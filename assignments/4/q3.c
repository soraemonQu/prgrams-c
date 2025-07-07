#include <math.h>
#include <stdio.h>

double f(double x)
{
    return x;
}

double integral(double a, double b, double ndiv)
{
    double sum = (f(a) + f(b)) / 2., dx = (b - a) / ndiv;
    for (int i = 1; i < ndiv; i++)
        sum += f(a + i * dx);
    return sum * dx;
}

int main()
{
    printf("%f\n", integral(0.0, 1.0, 1000));
    printf("%f\n", integral(0.0, 10.0, 1000000));
    return 1;
}
