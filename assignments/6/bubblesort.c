#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void bubble(int a[], int left, int right)
{
    for (int i = left; i < right - 1; i++)
        for (int j = i + 1; j < right; j++)
            if (a[j] < a[i])
                swap(&a[i], &a[j]);
}

int main()
{
    int A[] = {3, 1, 4, 5, 9, 2, 6, 8, 7};
    bubble(A, 0, 9);
    for (int k = 0; k < 9; k++)
        printf("%d\n", A[k]);
    return 0;
}
