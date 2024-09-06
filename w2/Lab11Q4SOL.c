/*
Lab 11 Question 4
*/

#include <stdio.h>

#define SIZE 3

//Function signatures
void sum(int, int, int);
void average(int);


int main(void)
{
    int num1, num2, num3;

    printf("Enter any %d numbers\n", SIZE);
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    // Calculate the sum of the entered numbers
    sum(num1, num2, num3);

  return 0;
} // end main()


// Calculate the sum of a set of numbers
void sum(int n1, int n2, int n3)
{
    int total = 0;

    total = n1 + n2 + n3;

    printf("\nThe sum of %d and %d and %d is: %d", n1, n2, n3, total);

    // calculate the average of the set of numbers
    average(total);

} // end sum()


// Calculate the average of a set of numbers
void average(int val)
{
    float avg = 0;

    avg = (float) val / SIZE;

    printf("\nThe average of the numbers is %.2f", avg);

} // end average()