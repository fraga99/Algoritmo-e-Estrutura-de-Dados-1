#include <stdio.h>

int main(){
    int x = 0, i, soma = 0, media;
    
    for ( i = 1; i <= 10; i++)    {
        printf ("Entre com dez valores inteiros para realizar sua media, %do: ", i);
        scanf ("%d", &x);
        if ( x >= 0 )    {
            soma = ( soma + x );
        } 
        
    }
    i--;
    media = ( soma / i );
    printf ("\nMedia = %d\n", media);
}