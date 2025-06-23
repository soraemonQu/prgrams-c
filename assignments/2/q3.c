#include <math.h>
#include <stdio.h>

void primes(int n)
{
    short nums[n - 1];
    for (int p = 0; p < n - 1; p++)
        nums[p] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (nums[i - 2] == 1)
            continue;
        if (i <= sqrt(n))
        {
            for (int j = i; j <= n / i; j++)
            {
                nums[i * j - 2] = 1;
            }
        }
        printf("%i\n", i);
    }
}

int main()
{
    primes(10);
    primes(100);
    return 0;
}
