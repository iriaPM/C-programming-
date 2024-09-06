/*
q3 lab6-- array 4 elements display how they were netered swap 1st with 2nd 3rth with 4th
Author: Iria Parada Murciego
Date: 15/11/22
*/

#include <stdio.h>

#define SIZE 4

int main()
{

    int num[SIZE]={0};
    int temp;
    int i;

    printf("please enter %d numbers into the array:\n",SIZE);

    for ( i = 0; i < SIZE; i++)//enter content into array 
    {
        scanf("%d",&num[i]);

    }//END FOR

    //swap 1st with 2nd -- (0 --> 1), (1-->0)
    temp=num[0];
    num[0]=num[1];
    num[1]=temp;
    //swap 3rd with 4th (2-->3),(3-->2)
    temp=num[2];
    num[2]=num[3];
    num[3]=temp;

    for (i=0;i<SIZE;i++)//part 1 display same order they wwre entered
    {
        printf ("\n%d",num[i]);
    }//END FOR 2
    
    return 0;
}//end main