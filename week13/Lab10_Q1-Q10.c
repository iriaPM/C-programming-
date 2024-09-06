/*
Prog_lab 10

Q1-Q10 book
*/
#include <stdio.h>

#define SIZE 8

int main()
{
    char chars[SIZE] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    int i;


    // array_name[i] = *(array_name + i)


    // Replace blank characters with an underscore
    for(i = 0; i < SIZE; i++)
    {
        // check if the current element is a blank character
        if( *(chars + i) == ' ')
        {
            *(chars + i) = '_';

        } // end if

    } // end for

    // Display the contents of the array
    for(i = 0; i < SIZE; i++)
    {
        printf("%c ", *(chars + i));

    } // end for

    return 0;
    
} // end main()