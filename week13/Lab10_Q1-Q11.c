/*
Prog_lab 10

Q1-Q11 book
*/
#include <stdio.h>

#define SIZE 5

int main()
{
    // array_name[i] = *(array_name + i)


    float litres[SIZE] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[SIZE] = {471.5, 358.72, 495.3, 453.6, 421.6};
    float mpl[SIZE] = {0};
    int i;


    // Divide each element in the miles array by the corresponding element in the litres array
    for(i = 0; i < SIZE; i++)
    {
        *(mpl + i) = *(miles + i) / *(litres + i);

    } // end for


    // Display the contents of the mpl array
    for(i = 0; i < SIZE; i++)
    {
        printf("%.1f ", *(mpl + i) );

    } // end for

    return 0;
    
} // end main()