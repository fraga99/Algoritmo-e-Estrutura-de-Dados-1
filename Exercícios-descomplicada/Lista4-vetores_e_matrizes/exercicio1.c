#include <stdio.h>

int main()  {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma, i;

    soma = A[0] + A[1] + A[5];
    printf ("\nSoma dos vetores das posições A[0], A[1] e A[5] = %d\n\n", soma);
    A[4] = 100;
    for ( i=0; i < 6; i++)  {
        printf("A[%d] = %d\n", i, A[i]);

    }


}