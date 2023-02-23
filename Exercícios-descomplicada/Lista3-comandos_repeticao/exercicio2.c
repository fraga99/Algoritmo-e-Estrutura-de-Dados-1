#include <stdio.h>

int main()  {
    int para; //for
    int enquanto = 1; // enquanto
    int faca_enquanto = 1; //faca enquanto

    for( para = 1; para <=100; para++)   {
        printf (" %d \t", para);
    }
    printf("\n\n");
    while ( enquanto > 0 && enquanto <= 100 )    {

        printf (" %d \t", enquanto);
        enquanto++;
    }
    printf("\n\n");
    do  {
        printf(" %d \t", faca_enquanto); 
        faca_enquanto++;  
    } while (faca_enquanto > 0 && faca_enquanto <=100);
    

}