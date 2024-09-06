/*

Iria Parada Murciego
c22305863
28/2/23

q5,q6 book lab14
*/

#include <stdio.h>
// #include <string.h>

#define SIZE 210

int main()
{
    // Q5

    // // a)
    char *p = "abcd";
    while (*p)
    {
        putchar(*p++);
    } // end while

    // // b)
    char *text = "abcd";
    char *p = text;
    p += strlen(p) - 1;
    while (text <= p)
    {
        puts(p--);

    } // end while

    // Q6
    // display name with space in between

    // use fgets()
    // use puts()
    char name[SIZE];

    printf("enter your name:\n");
    fgets(name, SIZE, stdin);

    char *ptr = name;

    while (*ptr != '\0')
    {
        printf("%c ", *ptr);

        ptr++;

    } // end while
    puts(name);

    return 0;
} // end main