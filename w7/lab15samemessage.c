/*
Iria Parada
7/3/23
compare words

*/


#include <stdio.h>
#include <string.h>


int main()
{
   char str1[21];
   char str2[21];
   int result = 0;

    
   printf("Enter first string\n");
   scanf("%s", str1);
   //fgets(str1, 20, stdin);

   printf("Enter second string\n");
   scanf("%s", str2);
   //fgets(str2, 20, stdin);

    
   // Compare both strings and check if they are the same
   result = strcmp(str1, str2);

   //Check if the strings are the same
   if(result == 0)
   {
       printf("\nStrings are the same");
   } // end if
   else
   {
       printf("\nDifferent strings");
   } // end else
  
   return 0;
    
} // end main()