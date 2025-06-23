#include <stdio.h>

int main()
{
    double g = 9.8;
    for (double t = 0; t <= 5.0; t += 0.1)
    {
        double x = 0.5 * g * t * t;
        printf("%3.1f %7.3f\n", t, x);
    }
    return 0;
}