/*
Iria Parada
7/3/23
match country with capital

*/

#include <stdio.h>
#include <string.h>

#define SIZE 20

int main()
{

    char *countries[SIZE] = {"Australia", "Belgium",
                             "China", "Denmark", "England",
                             "France", "Greece", "Ireland",
                             "Scotland", "Wales"};
    int i;
    char *capitals[SIZE] = {"Canberra", "Brussels",
                            "Beijing", "Conpenhagen",
                            "London", "Paris",
                            "Athens", "Dublin",
                            "Endinburgh", "Cardiff"};
    char name[SIZE];
    int result = 0;
    int find = 0;

    for (i = 0; i < SIZE; i++)
    {
        printf("%s\n", countries[i]);
    } // end for
    printf("\n\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%s\n", capitals[i]);
    } // end for

    printf("Please enter country:\n");
    scanf("%s", name);

    // find country entered
    for (i = 0; i < SIZE; i++)
    {
        result = strcmp(countries[i], name);

        if (result == 0)
        {
            find = 1;
            printf("\nThe Capital is : %s", capitals[i]);
            break;
        } // end if

    } // end for

    return 0;
} // end main