/*

Iria Parada Murciego 

Returning a value from a function. Write a program that uses a function to check if a
number is even or odd. Your main() should allow the user to enter any number and
this should be passed to your function. Your function should check if the number is
even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the
result
*/

#include <stdio.h>


int even_odd (int);

int main()
{

    int num = 0 ;

    int evodd = 0;

    printf("please enter a number: \n");
    scanf("%d", &num);

    evodd = even_odd(num)

    if (evodd == 1)
    {
        printf("\n even ");
    }
    else
    {
        printf("\n odd"); 
    }
    
    return 0;
}//end main

int even_odd(int number)
{
    if(number %2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}//end function