/*
q5 lab6-- array 5 char display.
Author: Iria Parada Murciego
Date: 15/11/22
*/
#include <stdio.h>

#define SIZE 5

int main()
{
    char words[SIZE];

    int i;
    
    printf("please neter %d characters:\n",SIZE);

    for ( i = 0; i < SIZE; i++)//enter words
    {
        scanf("%c",&words[i]);
    }//END FOR

    for ( i = 0; i < SIZE; i++)
    {
        printf("%c",words[i]);//display
    }

    return 0;
}//end main