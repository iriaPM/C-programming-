/*
program description: complete and see ehat happens:
author: Iria Parada Murciego
Date: 29/11/22
*/
#include <stdio.h>

int main()
{
   int var1;
   int *ptr;

   var1 = 1;
   ptr = &var1;

   printf("the address of var1 is %p\n" , &var1); 
   printf("ptr contains the %p\n",&ptr);
   printf("*ptr contains %d\n", *ptr);

   return 0; 
}