#include <stdio.h>
int main()
/* Program Description: Question 1 Lab 3, ask the user to display 3 numbers on separate lines
Author: Iria Parada Murciego
Date: 18/10/2022*/
{
  int var = 0;
  int var1= 0;
  int var2 = 0;

    /*printf("enter any 3  whole number\n");

    scanf("%d,%d,%d", &var,&var1,&var2,);*/
    printf("Enter first number\n");
    scanf("%d", &var);

    printf("Enter second number\n");
    scanf("%d", &var1);

    printf("Enter third number\n");
    scanf("%d",&var2);
    
    printf("You entered: \n %d\n %d\n %d",var,var1, var2);
    return 0;
}