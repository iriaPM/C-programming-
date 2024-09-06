/*
Program that enters fifteen numbers into an array and displays the array contents in various output formats
*/
#include <stdio.h>

#define SIZE 15

int main()
{
    int myarray[SIZE] = {0};
    int i;


    // Enter the fifteen numbers into the array
    printf("\nEnter %d numbers\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &myarray[i]);

    } // end for


    // part (a)
    // Display each number on a separare line
    printf("\nPart a");
    printf("\nDisplaying each number on a separate line\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d\n", myarray[i]);

    } // end for


    // part (b)
    // Display each number on one line separated by a space
    printf("\nPart b");
    printf("\nDisplaying each number on one line separated by a space\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", myarray[i]);

    } // end for


    // part (c)
    // Display each number on one line separated by a space in REVERSE order
    printf("\n\nPart c");
    printf("\nDisplaying each number on one line separated by a space in REVERSE order\n");

    for(i = SIZE - 1; i > -1; i--)
    {
        printf("%d ", myarray[i]);

    } // end for

    printf("\n\n");
    return 0;
    
} // end main()