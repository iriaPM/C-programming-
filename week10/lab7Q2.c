/*
Program Description: Write a program that uses 3x2 (2-D) array.
Your program must do the following:
a) Enter values into array
b) Display the values in the array
c) Find the smallest & largest value and display both to standard output
d) Calculate the average of the values and diplay to standard output
Author: Iria Parada Murciego
date:22/11/22
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int arr[ROW][COL];
    int i,j;

    int highest = 0;
    int lowest = 0;
    float average = 0;
    int sum = 0;
    
    printf("please enter %d values into array:\n",ROW*COL);

    for(i = 0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        
        }//end inner
    }//end outer

    highest = arr[0][0];
    lowest =  arr[0][0];
 
    for(i=0; i<ROW; i++)
    {

        for(j=0; j<COL; j++)
        {
 
            if(highest < arr[i][j])
            {
                highest = arr[i][j];
            }
        
            if(lowest > arr[i][j])
            {
                lowest = arr[i][j];
            }
            
        }//end inner
    }//end outer


    printf("\nhighest num is %d\n",highest);
    printf("\nlowest num  is %d\n",lowest);



    average = (float)sum / (ROW*COL);
    printf("\n average is %.1f",average);
   
    
    return 0;
}