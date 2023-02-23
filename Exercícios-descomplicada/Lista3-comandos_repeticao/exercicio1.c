#include <stdio.h>

int main()  {
    int x = 3, i = 1;
    while( i >= 1 && i <=5 )    {
        x = ( 3 * i );
        printf ("3 * %d = %d\n", i, x);
    i++;
    }

}