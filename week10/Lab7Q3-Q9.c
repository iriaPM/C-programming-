/*
Program that enters data into a 4x5 array, searches for values less than 0, and displays these with the corresponding row and column
*/
#include <stdio.h>

#define ROW 4
#define COL 5

int main()
{
    int my_array[ROW][COL] = {0};
    int i, j;


    // Enter data into the array
    printf("\nEnter %d numbers into Array 1\n", ROW*COL);

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &my_array[i][j]);

        } // end inner for
        
    } // end outer for


    // Display the row and column for any contents less than 0
    printf("\n\nChecking for any values less than zero\n");

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            if(my_array[i][j] < 0)
            {
                printf("\nRow %d, Col %d is less than 0 (contains %d)", i, j, my_array[i][j]);
            } // end if

        } // end inner for
        
    } // end outer for

    return 0;
    
} // end main()