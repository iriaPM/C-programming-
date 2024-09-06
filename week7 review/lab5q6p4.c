#include <stdio.h>
int main()
{
    /*lab 5 question 6 part4 --
     add number 1234 prints same number from left to right 
     Author: Iria Parada Murciego
     Date: 1/11/22*/
    int num;

    printf("Please enter a number ");
    scanf("%d",&num);
    
    do
    {
        printf("%d",num % 10);
        num /=10;
    } while (num != 0);
    
    return 0;
    
}//end main