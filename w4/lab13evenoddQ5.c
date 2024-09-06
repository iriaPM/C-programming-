/*

    Iria Parada Murciego 
    14/2/23
    Q5  even odd num
    
    lab13

*/

#include <stdio.h>

#define SIZE 5

int even_odd(int[]);


int main()
{
    int i;
    int myarray[SIZE];
    
    

    printf("please enter %d numbers\n", SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        scanf("%d", &myarray[i]);


    }//end for
    
    return 0;
}//end main

int even_odd(int my_array[])
{
    
    int i;
   

    for ( i = 0; i < SIZE; i++)
    {
        if (my_array[i] %2== 0)
        {
            printf("%d is even", my_array[i]);
        }//end if
        else
        {
            printf("%d is odd", my_array[i]);
        }//end else 
        
        
    }//end for
    
}//end evenodd