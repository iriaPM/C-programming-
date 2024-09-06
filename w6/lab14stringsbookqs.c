/*

Iria Parada Murciego
c22305863
28/2/23

q1, q2, q3 book lab14
*/

#include <stdio.h>

int main()
{
    // Q1

    // a)
    printf("%5s", "abcd");
    printf("\n");
    // b)
    printf("%5s", "abcdef");
    printf("\n");
    // c)
    printf("%-5s", "abc");
    printf("\n");
    // d)
    printf("%5.2s", "abcde");
    printf("\n");
    // e)
    printf("%-5.2s", "abcde");
    printf("\n");

    // Q2

    char name[] = {'R', 'o', 'b', 'e', 'r', 't'};
    // a)
    puts(name);
    printf("\n");
    // b)
    scanf("%s", &name);
    printf("\n");
    // c)
    strcpy(name, "Philip");
    printf("\n");
    // d)
    *(name + 5) = "a";
    // e)
    name = "Philip";

    // Q3
    char *text = "sometext";

    // a
    printf("\n");
    printf("a)");
    printf("\n");
    printf("%s\n", text);
    printf("\n");

    // b

    printf("b)");
    printf("\n");
    printf("%c\n", *text);
    printf("\n");

    // c
    printf("c)");
    printf("\n");
    printf("%c\n", *"more text");
    printf("\n");

    // d
    printf("d)");
    printf("\n");
    printf("%c\n", *(text + 1));
    printf("\n");

    // e
    printf("e)");
    printf("\n");
    printf("%s", text + 1);
    printf("\n");

    // f
    printf("f)");
    printf("\n");
    printf(text);
    printf("\n");

    // g
    printf("g)");
    printf("\n");
    *(text + 4) = '\0';
    printf("\n%s\n", text);
    printf("\n");

    // h
    printf("h)");
    printf("\n");
    printf("%c", "text"[2]);
    printf("\n");

    // i
    printf("i)");
    printf("\n");
    printf("%s", "text" + 2);
    printf("\n");

    return 0;
}