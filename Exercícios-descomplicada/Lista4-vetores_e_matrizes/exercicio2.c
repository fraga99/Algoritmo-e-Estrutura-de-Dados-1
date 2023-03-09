#include <stdio.h>
#include <stdlib.h>
#define N 6

int main()  {
    int B[N], i;

    for ( i = 0; i < N; i++)    {
        printf ("Digite um valor para preencher o vetor %d: ", i);
        scanf ("%d", &B[i]);
    }
    for ( i = 0; i < N; i++)    {
        printf ("Vetor[%d]: %d\n", i, B[i]);
    }
}