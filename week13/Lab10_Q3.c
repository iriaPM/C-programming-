/*
Lab 10

Q3

This program uses calloc() to dynamically allocate a block of memory, enter data into the memory 
block and display it. The average of the numeric data is calculated and displayed.
The memory block is freed (released) at the end when the memory block is no longer required.
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM 5

int main()
{
    float *ptr;
    int numbers = 0;
    //int no_bytes = 0;
    int i;
    float sum = 0;
    float average = 0;

    
    
    // Part 1
    // How many integers, i.e., data items, do you wish to enter
    // printf("\nHow many integers will you enter?\n");
    
    // scanf("%d", & numbers);
    
    // Part 2 NOT NEEDED
    // Calculate the number of bytes required to store the set of numbers in memory
    // no_bytes = numbers * sizeof(int);
    
    // Part 3
    // Allocate the block of memory required
    ptr = calloc(NUM, sizeof(float));
    
    // Part 4
    // Check if malloc was successful, i.e., check if the memory was allocated successfully
    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory\n");
    } // end if
    else // memory allocated successfully
    {
        // Part 5
        // memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");
        
        printf("\nEnter the set of %d float numbers\n", NUM);
        
        // Enter data items into the allocated memory block
        for(i = 0; i < NUM; i++)
        {
            scanf("%f", & *(ptr + i));

            sum = sum + *(ptr + i);
    
        } // end for

        // calculate average
        average = sum / NUM;
    
    
        printf("\nThe average of the numbers entered is: %.1f", average);
        
    
        // Part 6
        // Free the allocated memory block once finished using it
        free(ptr);
        
    } // end else
    
    return 0;

} // end main()