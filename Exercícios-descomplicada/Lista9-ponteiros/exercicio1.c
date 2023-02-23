#include <stdio.h>

int main()  {
    int inteiro = 1;
    float real = 6.66;
    char letra = 'd';

    int  *ptr_inteiro = &inteiro;
    float *ptr_real = &real;
    char  *ptr_letra = &letra;

    printf("\t========== Valor inicial ==========\n");
    printf ("%d\n", inteiro);     
    printf ("%.2f\n", real);
    printf ("%c\n", letra);

    *ptr_inteiro = 6;
    *ptr_real = 10.54;
    *ptr_letra = 'j';

    printf("\t========== Valor modificado ==========\n");

    printf ("%d\n", inteiro);     
    printf ("%.2f\n", real);
    printf ("%c\n", letra);

}