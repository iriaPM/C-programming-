/*
Program that enters data into two 1-D arrays with 5 elements each and displaying the result of multiplying the corresponding elements in each array
*/
#include <stdio.h>

#define SIZE 5

int main()
{
    int array1[SIZE] = {0};
    int array2[SIZE] = {0};
    int i;


    // Enter data into the two arrays
    printf("\nEnter %d numbers into Array 1\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);

    } // end for

    printf("\n\nEnter %d numbers into Array 2\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array2[i]);

    } // end for


    // Display the result of multiplying the corresponding elements in both arrays
    printf("\n\nMultiplying each corresponding element and displaying the result\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("Element %d * Element %d is %d\n", i, i, array1[i] * array2[i]);

    } // end for

    return 0;
    
} // end main()