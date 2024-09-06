/*
lab 19 
q1
Iria Parada Murciego
19/4/23 
compare two text files 
display any differences between files

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHARS 81

int main()
{
    FILE *fp;
    

    char one_line[MAX_CHARS];
    char one_line2[MAX_CHARS];

   // fp = fopen("helloworld.txt", "r");

    if ((fp=fopen("helloworld.txt", "r"))== NULL)&& fp
    {
        printf("\nError opening file");
    }
    else
    {
        //printf("\nhelloworld.txt opened successfully");
        while (fgets(one_line,MAX_CHARS,fp) != NULL)
        {
            printf("%s", one_line);
        }

        fclose(fp);
    }
    return 0;
}