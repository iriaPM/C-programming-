/*
Iria Parada
7/3/23

a)Concatenate the first word entered to the end of the string: "First word entered
is ". Display this entire string on the screen.

b) Calculate the length of the string in part (a) above and display the number of
characters used.

*/

#include <stdio.h>
#include <string.h>

void prefix(char[]);

void length1(char[]);

int main()
{
    char str1[21];
    char str2[21];
    int result = 0;
    

    printf("Enter first string\n");
    scanf("%s", str1);
    // fgets(str1, 20, stdin);

    printf("Enter second string\n");
    scanf("%s", str2);
    // fgets(str2, 20, stdin);

    // Compare both strings and check if they are the same
    result = strcmp(str1, str2);

    // Check if the strings are the same
    if (result == 0)
    {
        printf("\nStrings are the same");
    } // end if
    else
    {
        printf("\nDifferent strings");
    } // end else

    prefix(str1);

    length1(str1);

    return 0;

} // end main()

void prefix(char str1[])
{
    char prefixchar[30] = {"MY SENTENCE IS: "};

    strcat(prefixchar, str1);

    printf("\n%s", prefixchar);
}

void length1(char str1[])
{
    int leng = strlen(str1);

    printf("\nnumber of characters: %d", leng);
    
}
