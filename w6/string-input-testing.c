/**
 * @file string-input-testing.c
 * @author Artem Mikheev (D22124651@mytudublin.ie)
 * 
 * @brief This program demonstrates the way it is possible to read the user's input
 *        in the array of strings.
 * 
 * @version 1.0
 * @date 2023-03-01
 * 
 */


#include <stdio.h>
#include <stdlib.h>


#define SIZE 3
#define CELL_SIZE 20


int main() {

    // Declare variables.

    char *names[SIZE];


    // Allocate memory for each element in the array.

    for (int i = 0; i < SIZE; i++) {

        names[i] = calloc(CELL_SIZE, sizeof(char));

    } // end for


    // Ask a user to enter several names.

    printf("Enter %d names\n", SIZE);


    // Read in user's input.

    for (int i = 0; i < SIZE; i++) {

        fgets(names[i], CELL_SIZE, stdin);

    } // end for


    // Display the elements of the array.

    for (int i = 0; i < SIZE; i++) {

        printf("%s", names[i]);

    } // end for


    return 0;

} // end main()