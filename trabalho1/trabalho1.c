#include <stdio.h>
/*
===============
SubindoEscadas

    Esta função mostra de quantas maneiras da para subir uma escada de 45 degraus, subindo 
    1 e/ou 2 degraus por vez.
===============
*/
int SubindoEscadas( int n )    {
    int x[46];

    x[1] = 1;
    x[2] = 2;

    for ( int i = 3; i <= n; i++ )    {
        x[i] = ( x[ i - 1 ] + x[ i - 2 ] );       
    }
    printf ("\nQuantidade de modos de subir a escada: %d\n", x[n]);
    return x[n];
}
int main()    {
    int n = 0; // De 0 a 45 degraus
    SubindoEscadas (n);
}