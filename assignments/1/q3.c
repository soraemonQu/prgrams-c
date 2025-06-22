#include <stdio.h>

double convC2F(double c)
{
    return (9.0 / 5.0) * c + 32.0;
}

int main()
{
    printf("%.1f\n", convC2F(20.0));
    /* expects
        68.0
    */
    printf("%.1f\n", convC2F(0.0));
    /* expects
        32.0
    */
    return 0;
}