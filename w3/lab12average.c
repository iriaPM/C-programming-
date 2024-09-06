/*
IPM

Returning a value from a function. Write a program that uses a function to calculate
the average of 3 numbers. Your main() should ask the user to enter these 3 numbers
and they should be passed to the function as parameters. Your function should
calculate the average and return this value back to the main(). Your main() should
then display this average value

*/

#include <stdio.h>

#define SIZE 3

int find_average(int);

int main()
{

    int num1, num2,num3;
    int average;
    int sum;

    
        printf("enter three numbers:\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        scanf("%d", &num3);

        sum = num1+ num2 + num3;

        average = find_average(sum);

        printf("\n average is %d", average);

   
    
    return 0;
}//end main

int find_average(int n1)
{
    int avg;

    avg = n1 / SIZE;

    return avg;
}