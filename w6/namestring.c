
#include <stdio.h>
#include <string.h>

int main()
{

char name;

printf("enter your name:\n");
fgets(name,100,stdin);

for (int i=0; i<strlen(name); i++)
    if (name[i] != ' ' && name[i] != '\n')
    {
        putchar(name[i]);
        putchar(' ');
    }
putchar('\n');

return 0;
}//end main
