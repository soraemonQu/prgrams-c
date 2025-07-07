#include <math.h>
#include <stdio.h>

double calc_pi(int ndiv)
{
    double sum = 1., dx = 2. / ndiv;
    for (int i = 1; i < ndiv; i++)
        sum += sqrt(4 - i * i * dx * dx);
    return sum * dx;
}

int main()
{
    printf("%7.5f\n", calc_pi(10000));
    /* expects
        3.14159
    */
    return 0;
}
