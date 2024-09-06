/*
Program Description: write program to input numbers to 2d arrays 
each five elements 
display result of multiplying corresponding elements together.
Author: Iria Parada Murciego
Date: 22/11/22
*/
#include <stdio.h>

#define SIZE 5 

int main()
{
    int arr[SIZE]={0};
    int arra[SIZE]={0};
    int i;

    printf("please enter %d numbers:\n",SIZE);

    //input elements
    for ( i = 0; i < SIZE; i++)
    {
       
        scanf("%d",&arr[i]);
        
    }

    printf("please enter %d numbers:\n",SIZE);
    for ( i = 0; i < SIZE; i++)
    {
       
        scanf("%d",&arra[i]);
        
    }
    

    //display elements
    for ( i = 0; i < SIZE; i++)
    {
        
        printf(" el%d * el%d is %d\n",i,i, arr[i]*arra[i]);
    }
    





    return 0;
}