#include <stdio.h>

int main ()    {
    int *a;
    a = (int *) malloc( 5 * sizeof(int));

    for ( int i = 0; i < 5; i++)    {
        printf ("\nDigite 5 valores: ");
        scanf ("%d", &a[i]);
    }
    for ( int i = 0; i < 5; i++)    {
        printf ("\nValores de a: %d", a[i]);
    }
    free(a);





}