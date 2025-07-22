#include <stdio.h>
#define M 10000

void merge(int a[], int left, int right)
{
    if (left >= right - 1)
        return;
    int i, j, mid = (left + right) / 2;
    merge(a, left, mid);
    merge(a, mid, right);
    int tmp[M];
    for (i = left; i < mid; i++)
        tmp[i] = a[i];
    for (j = mid; j < right; j++)
        tmp[right + mid - j - 1] = a[j];
    i = left, j = right - 1;
    for (int k = left; k < right; k++)
        if (tmp[i] <= tmp[j])
            a[k] = tmp[i++];
        else
            a[k] = tmp[j--];
}

int main()
{
    int A[] = {3, 1, 4, 5, 9, 2, 6, 8, 7};
    merge(A, 0, 9);
    for (int k = 0; k < 9; k++)
        printf("%d\n", A[k]);
    return 0;
}
