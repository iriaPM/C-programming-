#include <stdio.h>
int main(void)
{
int var = 0;
char my_char = ' ';
printf("Enter a single number and a single character\n");
scanf("%d", &var);
while(getchar() != ‘\n’);
scanf("%c", &my_char);
printf("You entered %d and %c", var, my_char);
return 0;
}