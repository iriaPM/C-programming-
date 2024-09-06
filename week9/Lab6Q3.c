/*
Lab 6 Q3

Integer array with 4 elements. Enter four numbers and swap the 1st and 2nd, and the 3rd and 4th. Display the new contents of the array.
*/
#include <stdio.h>

#define SIZE 4

int main()
{
    int array1[SIZE] = {0};
    int temp;

    int i;


    printf("Enter %d numbers\n", SIZE);

    //Enter numbers into array1
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("\nSwapping process beginning ...\n\n");

    // Swap the 1st and 2nd number
    temp = array1[0];
    array1[0] = array1[1];
    array1[1] = temp;

    // Swap the 3rd and 4th number
    temp = array1[2];
    array1[2] = array1[3];
    array1[3] = temp;


    //Display the contents of array1
    for(i = 0; i < SIZE; i++)
    {
        // Display array2
        printf("%d ", array1[i]);
    }

    return 0;

} // end main()