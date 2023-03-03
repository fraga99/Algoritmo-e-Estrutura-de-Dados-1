#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
===============
judgeCircle
   This function will add and/or decrement coordinates (x,y) according to the robot's movements
   and finally it will return true if the robot walked and returned to origin or false if it 
   walked and did not return to the origin. 
===============
*/
bool JudgeCircle ( char *moves )     {
    int x = 0, y = 0;
        for ( int i = 0; i < strlen(moves); i++)    {

            if ( moves[i] == 'U' )    {
                x++;
            }
            if ( moves[i] == 'D' )    {
                x--;
            } 
            if ( moves[i] == 'L' )    {
                y--;
            }
            if ( moves[i] == 'R' )    {
                y++;
            }

        }
    if ( x == 0 && y == 0 )    {
        printf ("Is at the origin: (%d,%d)\n", x, y);
        return true;
    } else    {
        printf ("Is not at the origin: (%d,%d)\n", x, y);
        return false;
    }   
}


int main()  {
    char *moves[] = {'UD'};
    JudgeCircle(moves);

    

}