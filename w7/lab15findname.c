/*
Iria Parada
7/3/23
find name in array of names
*/

#include <stdio.h>
#include <string.h>

#define SIZE 9

int main()
{

    char *nameslist[SIZE] = {"Iria", "Joe",
                             "Micheal", "Sean",
                             "Mariana", "Ciaran",
                             "Richard", "Art",
                             "Jane"};
    int i;
    char name[SIZE];
    int result = 0;
    int find = 0;

    for (i = 0; i < SIZE; i++)
    {
        printf("%s\n", nameslist[i]);
    } // end for

    printf("Please write your name:\n");
    scanf("%s", name);


    for ( i = 0; i < SIZE; i++)
    {
        result = strcmp(nameslist[i], name);

        if(result == 0)
        {
            find = 1;
            break;
        }//end if

    }//end for 
    

    if (find == 1)
    {
        printf("\nname found");

    }//end if 
    else
    {
        printf("\nname not found\n");

    }//end else

   

    return 0;
} // end main