#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "program2_functions.h"

int main()
{
    int myNum = -1; //Used for the starting number
    while ((myNum!= 0) && (myNum != 1))
    {
        myNum = getUserInput(myNum);
        
        int scorePoints[] = {2, 3, 6, 7, 8};
        int scoreCount[5] = {0, 0, 0, 0, 0};

        scoreCounter(scorePoints, 5, myNum, scoreCount, 0);
    }
    return 0;
}