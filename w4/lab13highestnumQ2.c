/*

    Iria Parada Murciego 
    14/2/23
    Q2 passinf 1-D array 
    find highest num
    lab13

*/

#include <stdio.h>

#define SIZE 5

int HighestNum(int[]);

int main()
{

    int myarray[SIZE];
    int i;
    int highestn;

    printf("please enter %d numbers\n", SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        
        scanf("%d", &myarray[i]);

    }//end for

   
    
    highestn = HighestNum(myarray);

    printf("\nhighest num is: %d", highestn);
    
    return 0;
}//end main


int HighestNum(int my_array[])
{

    int highest = my_array[0];
    int i;

    for ( i = 0; i < SIZE; i++)
    {
        if (highest < my_array[i])
        {
            highest = my_array[i];
        }//end if 
        
    }//end for

    return highest;
    

}//end function