#include <stdio.h>
#include <stdlib.h>

int TrocaVariaveis (int *pont_a, int *pont_b)    {
    int a = 10, b = 2, aux;
    pont_a = &a;
    pont_b = &b;
    printf ("\nVariaveis antes da troca: A = %d e B = %d\n\n", *pont_a, *pont_b);

    aux = *pont_a;
    *pont_a = *pont_b;
    *pont_b = aux;

    printf ("\nVariaveis antes da troca: A = %d e B = %d\n\n", *pont_a, *pont_b);


}

int main ( void )   {
    int a, b;
    TrocaVariaveis(a, b);

}
