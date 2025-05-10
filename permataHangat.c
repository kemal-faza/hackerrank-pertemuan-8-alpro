#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X, i, selisih, hasil, selisih_sementara;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Masukkan nilai X: ");
    scanf("%d", &X);

    int A[N];
    for (i = 0; i < N; i++)
    {
        printf("Masukkan nilai tabel elemen ke-%d: ", i);
        scanf("%d", &A[i]);
    }

    selisih = abs(A[0] - X);
    hasil = 0;
    for (i = 0; i < N; i++)
    {
        selisih_sementara = abs(A[i] - X);
        if ((selisih_sementara < selisih) || (selisih_sementara == selisih && hasil > A[i]))
        {
            hasil = A[i];
            selisih = selisih_sementara;
        }
    }

    printf("Hasil = %d, Selisih = %d", hasil, selisih);

    return 0;
}