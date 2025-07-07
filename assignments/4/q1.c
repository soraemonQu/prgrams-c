#include <math.h>
#include <stdio.h>

void freefall2(double v0, double theta)
{
    double x, y, t, g = 9.8, vx = v0 * cos(theta), vy = v0 * sin(theta);
    for (int i = 1;; i++)
    {
        t = i / 10.0, x = vx * t, y = vy * t - g * t * t / 2;
        if (y < 0)
            return;
        printf("%4.2f %4.2f\n", x, y);
    };
}

int main()
{
    freefall2(10.0, 3.1415 / 3.0);
    /* expects
        0.00 0.00
        0.50 0.82
        1.00 1.54
        1.50 2.16
        2.00 2.68
        2.50 3.11
        3.00 3.43
        3.50 3.66
        4.00 3.79
        4.50 3.83
        5.00 3.76
        5.50 3.60
        6.00 3.34
        6.50 2.98
        7.00 2.52
        7.50 1.97
        8.00 1.31
        8.50 0.56
    */
    freefall2(10.0, 3.1415 / 6.0);
    /* expexts
        0.00 0.00
        0.87 0.45
        1.73 0.80
        2.60 1.06
        3.46 1.22
        4.33 1.27
        5.20 1.24
        6.06 1.10
        6.93 0.86
        7.79 0.53
        8.66 0.10
    */
    return 0;
}
