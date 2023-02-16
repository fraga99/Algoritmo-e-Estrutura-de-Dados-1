#include <stdio.h>

int main()  {
    int inteiro = 1, *ptr_inteiro;
    float real = 6.66, *ptr_real;
    char letra = 'd', *ptr_letra;

    ptr_inteiro = &inteiro;
    ptr_real = &real;
    ptr_letra = &letra;

    printf("/t==========Valor inicial==========\n");
    printf ("%d\n", inteiro);     
    printf ("%.2f\n", real);
    printf ("%c\n", letra);

    *ptr_inteiro = 6;
    *ptr_real = 10.54;
    *ptr_letra = 'j';

    printf("/t==========Valor modificado==========\n");

    printf ("%d\n", inteiro);     
    printf ("%.2f\n", real);
    printf ("%c\n", letra);

}