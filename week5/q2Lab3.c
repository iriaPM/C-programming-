#include <stdio.h>
int main()
/* Program Description: Question 2 Lab 3, ask the user to display 2 characters.
Author: Iria Parada Murciego
Date: 18/10/2022*/
{
  char my_char = ' ';
  char my_char1= ' ';
  
    printf("Enter any 2 character\n");
    scanf("%1s\n %1s",&my_char,&my_char1);

    printf("You entered: \n %c\n %c",my_char,my_char1);
    return 0;
    //when changed the dilimiter to %d computer printed 2 numbers instead of the characters.
}