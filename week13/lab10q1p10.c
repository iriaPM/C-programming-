// Program description lab10 q1 --q10 from book 
// pointers
// Iria Parada Murciego
// 13/12/22


#include <stdio.h>
#define SIZE 8
int main()
{
    char chars[SIZE]={'a',' ','b',' ','c',' ',' ','d'};
    int i;

    //array_name[i]= *(array_name +1)

    //replace blank characters with an underscore
    for ( i = 0; i < SIZE; i++)
    {
        if (chars [i] ==' ')
        {
            chars[i] = '_';
        }//end if
           
    }//end for

    //display result
    for ( i = 0; i < SIZE; i++)
    {
       printf("%c",chars[i]);

    }//end for

    
    //replace blank characters with an underscore
    for ( i = 0; i < SIZE; i++)
    {
        if (*(chars + 1) [i] ==' ')
        {
            chars[i] = '_';
        }//end if
           
    }//end for

    //display result
    for ( i = 0; i < SIZE; i++)
    {
       printf("%c",chars[i]);

    }//end for
    
    
    return 0;
}//end main