#include <stdio.h>
int main(void)
{
char my_char = ' ';
printf("Enter any character\n");
// use the getchar() function
//scanf("%c", &my_char);
// same as above
my_char = getchar();
//printf("my_char contains %c", my_char);
 printf("\nYou entered ");
putchar(my_char);
 
return 0;
}
