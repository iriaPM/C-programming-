/*
enter numbers to array with 3 elements ascending order 
Author: Iria Parada Murciego
Date: 1/11/22
*/
#include <stdio.h>

#define SIZE 3

int main()
{
    int num[SIZE]={0};
    int temp=0;

    int i;
    int j;

    printf("please enter %d numbers:\n",SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d",&num[i]);

    }//END FOR

    for ( i = 0; i < SIZE; i++)
    {
        for ( j = 0; j < SIZE; j++)
        {
            if (num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }//end if
            
        }//end for inner 
        
    }//end for outer 
    

    for (i=0;i<SIZE;i++)//part 1 display same order they wwre entered
    {
        printf ("\n%d",num[i]);
    }//END FOR 2
    
    
    return 0;
}//end main