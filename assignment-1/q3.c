#include <stdio.h>

double convC2F(double c)
{
    return (9.0 / 5.0) * c + 32.0;
}

int main()
{
    printf("%f\n", convC2F(0.0));
    printf("%f\n", convC2F(100.0));
    return 0;
}