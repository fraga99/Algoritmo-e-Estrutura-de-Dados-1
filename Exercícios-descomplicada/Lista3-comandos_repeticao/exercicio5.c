#include <stdio.h>

int main()  {
    int x, soma, i, a;

    for (x = 1; x <= 10; x++)   {
    printf ("Entre com dez numeros, %do: ", x);
    scanf ("%d", &a);
    soma = soma + a;
    }
    
    printf ("Valor total dos numeros somados: %d\n", soma);
}