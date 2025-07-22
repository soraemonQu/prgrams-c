#include <stdio.h>

void exchange(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int partition(int A[], int p, int r)
{
    int x = A[p];
    int i = p - 1;
    int j = r + 1;
    while (1)
    {
        while (A[--j] > x)
            ;
        while (A[++i] < x)
            ;
        if (i < j)
            exchange(&A[i], &A[j]);
        else
            return j;
    }
}

void quicksort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p, r);
        quicksort(A, p, q);
        quicksort(A, q + 1, r);
    }
}

int main()
{
    int A[] = {5, 3, 2, 6, 4, 1, 3, 7};
    quicksort(A, 0, 7);
    for (int p = 0; p <= 7; p++)
        printf("%d : %d\n", p, A[p]);
}
