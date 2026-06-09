#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);

        int A[n], B[n], C[n];

        // input array A and copy to B
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        // sort B
        qsort(B, n, sizeof(int), cmp);

        // make C
        for (int i = 0; i < n; i++)
        {
            C[i] = abs(A[i] - B[i]);
        }

        // print C
        for (int i = 0; i < n; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}