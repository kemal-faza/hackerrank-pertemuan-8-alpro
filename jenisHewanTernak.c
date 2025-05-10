#include <stdio.h>

int main()
{
    int N, Q, i, j, atas, bawah, tengah, jenis_hewan;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    long long A[N];
    for (i = 0; i < N; i++)
    {
        printf("Masukkan nilai tabel elemen ke-%d: ", i + 1);
        scanf("%lld", &A[i]);
    }

    printf("Masukkan nilai Q: ");
    scanf("%d", &Q);

    long long X[Q];
    for (i = 0; i < Q; i++)
    {
        printf("Masukkan nilai X ke-%d: ", i + 1);
        scanf("%lld", &X[i]);
    }

    long long jumlah_sebelumnya[N];
    jumlah_sebelumnya[0] = A[0];
    for (i = 1; i < N; i++)
    {
        jumlah_sebelumnya[i] = jumlah_sebelumnya[i - 1] + A[i];
    }

    for (i = 0; i < Q; i++)
    {
        atas = 0;
        bawah = N - 1;
        jenis_hewan = -1;

        while (atas <= bawah)
        {
            tengah = atas + (bawah - atas) / 2;

            if (jumlah_sebelumnya[tengah] >= X[i])
            {
                jenis_hewan = tengah + 1;
                bawah = tengah - 1;
            }
            else
            {
                atas = tengah + 1;
            }
        }

        printf("%d\n", jenis_hewan);
    }
    return 0;
}
