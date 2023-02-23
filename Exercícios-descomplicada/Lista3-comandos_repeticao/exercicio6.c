#include <stdio.h>

int main()  {
    int x, i, media, soma;
    for ( i = 1; i <= 10; i++)  {
        printf ("Digite 10 numeros para fazer sua média, %do: ", i);
        scanf ("%d", &x);
        soma = soma + x;
        media = soma/i;
    }
    printf ("Media: %d\n", media);
}