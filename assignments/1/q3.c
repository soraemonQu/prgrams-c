#include <stdio.h>

double convC2F(double c)
{
    return (9.0 / 5.0) * c + 32.0;
}

int main()
{
    double inputs[] = {20.0, 0.0};
    double expected[] = {68.0, 32.0};

    int l = sizeof(inputs) / sizeof(inputs[0]);
    for (int i = 0; i < l; ++i)
    {
        double result = convC2F(inputs[i]);
        if (result == expected[i])
            fprintf(stdout, "CASE %i/%i : OK\n", i + 1, l);
        else
            fprintf(stderr, "CASE %i/%i : NG <expected %.1f, got %.1f>\n", i + 1, l, expected[i], result);
    }
    printf("\n");

    return 0;
}