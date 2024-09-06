#include <stdio.h>
int main()
{
/*  question6 lab5 part6 -- find sum of all odd integers 1 to 99
     Author: Iria Parada Murciego
     Date: 1/11/22*/
    int i;

//starts at 1 end 98 as its added one after the loop
    //i+=2 to print odd numbers
    for ( i = 1; i < 98; i+=2)
    {
            printf("%d,",i);

    }//end for
    printf("%d\n",i);// so it doesnt print comma in last number 

    
    return 0;
}