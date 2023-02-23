#include <stdio.h>

int main()  {
    int a, b, i;
    
    a = 5;
    b = 10;


    if ( &a > &b )  {
        printf("\nA variavel a tem o maior endereço, seu endereço é: %d\n", &a);
    }   else    {
        printf ("\nA variavel b tem o maior endereço seu endereço é: %d\n", &b);
    }
    
}