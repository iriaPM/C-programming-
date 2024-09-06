/*program description:
lab7 q3 part4----read in fifteen numbers and display them on 
seperate lines, 
on one line each num separated by a space,
reverse order to wich they were input
Author: Iria Parada Murciego
date:22/11/22
*/
#include <stdio.h>

#define SIZE 15

int main()
{
    int arr[SIZE];
    int i,j;
    int sum;
    printf("please enter %d numbers\n",SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("..............\n");

    //display on seperate lines
    for ( i = 0; i < SIZE; i++)
    {
        printf("\n%d",arr[i]);

    }
    
    printf("\n..............\n");

    //separeted by space
    for ( i = 0; i < SIZE; i++)
    {
        printf(" %d",arr[i]);

    }

    printf("\n..............\n");

    //reverse order
    for ( i = SIZE -1 ; i >-1; i--)
    {
       
        printf("%d ",arr[i]);

    } 
  
    return 0;
}