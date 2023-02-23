#include <stdio.h>

int main()  {
    int num, num_maior, num_menor, i;

    for ( i = 0; i < 10; i++ )   {
        printf ("Digite um número: ");
        scanf ("%d", &num);
        if ( num < num_menor )  {
            num_menor = num;
        }
        if ( num > num_maior )  {
            num_maior = num;
        }
    }
    printf ("\n%d foi o menor numero digitado!\n", num_menor);
    printf ("\n%d foi o maior numero digitado!\n", num_maior);
}
