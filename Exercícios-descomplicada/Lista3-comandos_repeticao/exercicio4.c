#include <stdio.h>

int main()  {
    int x = 0;
    while (x >=0 && x<100000)  {
        x = x+1000;
        printf(" %d \t", x);
    }
}