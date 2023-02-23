#include <stdio.h>

    int main()  {
    int a, b, i;
    
    printf ("Digite um valor inteiro para a variavel a: ");
    scanf ("%d", &a);
    printf ("Digite um valor inteiro para a variavel b: ");
    scanf ("%d", &b);


    if ( &a > &b )  {
        printf("\nA variavel a tem o maior endereço, seu endereço é: %d\n", &a);
    }   else    {
        printf ("\nA variavel b tem o maior endereço seu endereço é: %d\n", &b);
    }
    
}
