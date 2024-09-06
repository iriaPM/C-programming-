/*
Program description:  2 initialize 3x4 array  , once declared, declare a new one  
multiply two arrays and put it in the 3rd one. 
Author: Iria Parada Murciego
DATE: 29/11/22
*/
#include <stdio.h>

#define ROW 3 
#define COL 4 

int main()
{
    int my_array[ROW][COL];
    int my_array2[ROW][COL];
    int my_array3[ROW][COL];

    int i;
    int j;

    //input array 1 
    printf("please enter %d numbers into array:\n",ROW*COL);
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            scanf("%d",&my_array[i][j]);
        }
        
    }

    //input array 2
    printf("please enter %d numbers into 2nd array:\n",ROW*COL);
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            scanf("%d",&my_array2[i][j]);
        }
        
    }

    //multiplication of array1 and array2  into array3 
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            my_array3[i][j] = my_array[i][j] * my_array2[i][j];
            printf("array1 * array2 = array3: A1 %d * A2 %d = A3 %d\n",my_array[i][j], my_array2[i][j], my_array3[i][j]);
        }
        
    }
    return 0;
}
