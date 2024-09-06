/*
Prog desc

Author:
Date:

*/

#include <stdio.h>

int main()
{
    int sum = 0;
    float average = 0;


    // part (i)
    // calculate the sum of numbers 1 to 5
    sum =  1 + 2 + 3 + 4 + 5;

    printf("The sum of the numbers 1 to 5 is %d", sum);

    // part (ii)
    // calculate the average of numbers 1.0 - 2.0
    average = (1.0 + 1.1 + 1.2 + 1.3 + 1.4 + 1.5 + 1.6 + 1.7 + 1.8 + 1.9 + 2.0) / 11;

    printf("\n\nThe average of the numbers is %f", average);

    return 0;   
}