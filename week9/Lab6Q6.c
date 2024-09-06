/*
Lab 6 Q6

User enters 3 numbers into an array. The array is sorted in ascending order
*/
#include <stdio.h>

#define SIZE 3

int main()
{
    int array1[SIZE] = {0};
    int tmp = 0;

    int i;
    int j;


    printf("Enter %d numbers\n", SIZE);

    //Enter numbers into array1
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("\nOrdering (ascending) process beginning ...\n\n")


    // Bubble sort algorithm
    for (i = 0; i < SIZE - 1; i++)   
    {
    
        // Last i elements are already in place
        for (j = 0; j < SIZE - i - 1; j++)
        {
        
            if (array1[j] > array1[j+1])
            {
                tmp = array1[j];
                array1[j] = array1[j + 1];
                array1[j + 1] = tmp;
            } // end if

        } // end inner for

    } // end outer for



    //Display the contents of array1 in ascending order
    for(i = 0; i < SIZE; i++)
    {
        // Display array2
        printf("%d ", array1[i]);
    }

    return 0;

} // end main()