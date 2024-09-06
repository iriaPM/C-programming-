/*
Iria Parada Murciego
21/3/23

Design structure templates, incorporating the use of nested structures, to store
biographical data about a person

*/

#include <stdio.h>
#include <string.h>

#define SIZE 5

// Structure template(s)
struct bio_rec
{

    char firstname[21];
    char surname[21];
    int dob[3];

    int weight;
    char eyecol[21];
    char country[21];
};

// Function signature(s)
// Pass by Value, a COPY is passed
void display(struct bio_rec);

// Pass by Reference, the address location is passed
void enter(struct bio_rec *);

int main()
{
    struct bio_rec student;

    // Enter the data into the structure student variable
    enter(&student);

    // Display the contents of the structure variable student
    display(student);

    return 0;
} // end main()

/*
Function enter is used to enter the contents of a structure variable parameter
*/
void enter(struct bio_rec *ptr)
{
    int i;

    printf("\nEnter weight : ");
    scanf("%d", &ptr->weight);

    // scanf("%d", & (*ptr).student_ID);

    // Clear the stdin buffer so that the 'Enter' key is not being read
    while (getchar() != '\n');

    printf("\nEnter first name: ");
    // scanf("%s", ptr -> firstname);
    fgets(ptr->firstname, 20, stdin);

    printf("\nEnter surname: ");
    // scanf("%s", ptr -> surname);
    fgets(ptr->surname, 20, stdin);

    printf("\nEnter eyecolor: ");
    // scanf("%s", ptr -> surname);
    fgets(ptr->eyecol, 20, stdin);

    printf("\nEnter country: ");
    // scanf("%s", ptr -> surname);
    fgets(ptr->country, 20, stdin);

    printf("\nEnter %d dob\n", 3);

    // Enter the dob
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &ptr->dob[i]);

    } // end for

} // end enter()

/*
Function display is used to display the contents of a structure variable parameter
*/
void display(struct bio_rec stu)
{
    int i;

    // Display the first name
    printf("\n\nFirstname: %s", stu.firstname);

    // Display the surname
    printf("\nSurname is: %s\n", stu.surname);

    printf("\nweight is: %d\n", stu.weight);
    printf("\neye color is: %s\n", stu.eyecol);
    printf("\ncountry is: %s\n", stu.country);

    // Display the dob
    printf("\ndob are:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d/", stu.dob[i]);

    } // end for

} // end display()