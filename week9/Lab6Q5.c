/*
Lab 6 Q5

Program that enters 5 characters into a character array
*/
#include <stdio.h>

#define SIZE 5

int main()
{
    char array1[SIZE];

    int i;


    printf("Enter %d characters\n", SIZE);

    //Enter numbers into array1
    for(i = 0; i < SIZE; i++)
    {
        scanf("%c", &array1[i]);
    }


    printf("\nYou entered ...\n\n");

    // Display the contents of array1
    for(i = 0; i < SIZE; i++)
    {
        printf("%c", array1[i]);
    }

    return 0;

} // end main()