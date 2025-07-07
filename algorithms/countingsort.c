#include <stdio.h>

void counting_sort(int A[], int B[], int C[], int n, int k)
{
    for (int i = 0; i < k; i++)
        C[i] = 0;
    for (int j = 0; j < n; j++)
        C[A[j]]++;
    for (int i = 1; i < k; i++)
        C[i] += C[i - 1];
    for (int j = n - 1; j >= 0; j--)
        B[--C[A[j]]] = A[j];
}

int main()
{
    int A[] = {2, 5, 3, 0, 3, 3, 0, 3};
    int B[8], C[6];
    counting_sort(A, B, C, 8, 6);
    for (int p = 0; p < 8; p++)
        printf("%d\n", B[p]);
    return 0;
}