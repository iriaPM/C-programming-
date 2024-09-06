/*

    Iria Parada Murciego 
    14/2/23
    Q3 passing 1-D array 
    find average
    lab13

*/

#include <stdio.h>

#define SIZE 5

int avgarray(int[]);

int main()
{
    int i;
    int myarray[SIZE];
    int average;
    

    printf("please enter %d numbers\n", SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d", &myarray[i]);


    }//end for

    average = avgarray(myarray);


    printf("\naverage of numbers entered is:   %d", average);
    
    return 0;
}//end main

int avgarray(int my_array[])
{
    int total= 0 ;
    int average=0;
    int i; 

    //find sum of array
    for ( i = 0; i < SIZE; i++)
    {
        total = total + my_array[i];
    }
    
    //find average 
    average = (total / SIZE);

    return average;
}