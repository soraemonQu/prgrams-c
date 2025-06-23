#include <stdio.h>

void primes(int n)
{
    int len = 0;
    int gained[1000] = {};
    for (int i = 2; i <= n; i++)
    {
        short flag = 0;
        for (int j = 0; j < len; j++)
        {
            if (i % gained[j] == 0)
                flag = 1;
        }
        if (flag == 0)
        {
            gained[len++] = i;
            printf("%i\n", i);
        }
    }
}

int main()
{
    primes(10);
    primes(100);
    return 0;
}
