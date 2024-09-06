/*
Program that performs various operations on a 3 x 4 array
*/
#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{

    int array1[ROW][COL] =  {
                                1, 2, 3, 4,
                                5, 6, 7, 8,
                                9, 10, 11, 12
                            };

    int array2[ROW][COL] =  {
                                12, 11, 10, 9,
                                8, 7, 6, 5,
                                4, 3, 2, 1
                            };

    int array3[ROW][COL] = {0};

    int i, j;


    // Multiply each corresponding element in array1 and array2 and store in array3

    printf("\nArray3 contains:\n");

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            array3[i][j] = array1[i][j] * array2[i][j];

            // display each element in array3
            printf("%d ", array3[i][j]);

        } // end inner for

    } // end outer for

    return 0;

} // end main