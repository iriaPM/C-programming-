/*
q4 lab6-- array 5 elements copy in reverse order.
Author: Iria Parada Murciego
Date: 15/11/22
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int num[SIZE]={0};
    int num2[SIZE]={0};

    int i;
    int j =4;

    printf("please enter %d integers:\n",SIZE);

    for ( i = 0; i < SIZE; i++)//conent into array
    {
        scanf("%d",&num[i]);
    }

    for ( i = 0; i < SIZE; i++)//descent order /change order
    {
        num2[j]=num[i];
        j--;
    }//end for

    for ( i = 0; i < SIZE; i++)//display
    {
        printf("\n%d",num2[i]);
    }
    
    
    return 0;
}//end main