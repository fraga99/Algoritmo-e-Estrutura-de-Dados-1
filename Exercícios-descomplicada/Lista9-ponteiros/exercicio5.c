#include <stdio.h>
/* Exercício 5
    Fac ̧a um programa que leia dois valores inteiros e chame uma func ̧  ̃ao que receba estes
2 valores de entrada e retorne o maior valor na primeira vari  ́avel e o menor valor na
segunda vari  ́avel. Escreva o conte  ́udo das 2 vari  ́aveis na tela

*/

void MaiorValor(int *a, int *b)    {
    if ( a > b )    {
        printf ("a é maior que b\n");
        return a;
    }else   {
        printf ("b é maior que a\n");
        return b;
    }

}

int main ()    {
    int a, b;
    printf ("Digite um valor para a: ");
    scanf ("%d", &a);
    printf ("\nDigite um valor para b: ");
    scanf ("%d", &b);

    MaiorValor(a, b);

}