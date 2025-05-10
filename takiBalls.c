#include <stdio.h>

int binary_search(int A[], int N, int X)
{
    int atas = 0;
    int bawah = N;

    while (atas < bawah)
    {
        int tengah = atas + (bawah - atas) / 2;
        if (A[tengah] <= X)
        {
            atas = tengah + 1;
        }
        else
        {
            bawah = tengah;
        }
    }

    return atas;
}

int main()
{
    int N, Q, i, IX, IY, result;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    int A[N];
    for (i = 0; i < N; i++)
    {
        printf("Masukkan nilai tabel elemen ke-%d: ", i);
        scanf("%d", &A[i]);
    }

    printf("Masukkan nilai Q: ");
    scanf("%d", &Q);

    int X[Q], Y[Q];
    for (i = 0; i < Q; i++)
    {
        printf("Masukkan nilai X ke-%d: ", i);
        scanf("%d", &X[i]);

        printf("Masukkan nilai Y ke-%d: ", i);
        scanf("%d", &Y[i]);
    }

    for (i = 0; i < Q; i++)
    {
        IX = binary_search(A, N, X[i]);

        IY = binary_search(A, N, Y[i]);

        result = IY - IX;

        printf("%d\n", result);
    }

    return 0;
}
