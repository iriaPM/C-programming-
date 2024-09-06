/*
Array of structures
*/
/*  !!!!! USE NESTED STRUCTURE!!!!!!  FOR DOB*/

//ptr -> firstname[strlen(ptr->firstname)-1]='\0';

#include <stdio.h>

#define LENGTH 11
#define S_LENGTH 21
#define SIZE 2

// Structure template(s)
struct date
{
    int day;
    int month;
    int year;
};

struct student_rec
{
    int height;
    int weight;
    char firstname[LENGTH];
    char surname[S_LENGTH];
    char eyecolor[S_LENGTH];
    char country[S_LENGTH];
    struct date DOB;
};

// Function signature(s)
// ...

void enter( struct student_rec *students);
int main()
{
    int i;
    struct student_rec students[SIZE];

    enter(students);

    /*__________________________________________________________________*/

    // Display the data entered
    printf("\nThe height for each student is:");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", students[i].height);

    } // end for

    // Display the data entered
    printf("\nThe Student weight for each student is:");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", students[i].weight);

    } // end for

    printf("\nThe Student first name for each student is: ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%s ", students[i].firstname);

    } // end for

    printf("\nThe Student eye color : ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%s ", students[i].eyecolor);

    } // end for

    printf("\nThe Student country : ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%s ", students[i].country);

    } // end for

    printf("\nDate of Birth:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("\nDay %d ", students[i].DOB.day);
        printf(" Month %d ", students[i].DOB.month);
        printf(" Year %d \n", students[i].DOB.year);

    }
   
    return 0;

} // end main()

void enter(struct student_rec *students)
{
    int i;
    printf("\nEnter height for each student:");

    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter height for student %d :", i + 1);
        scanf("%d", &students[i].height);

    } // end for

    printf("\nEnter weight for each student:");

    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter weight for student %d :", i + 1);
        scanf("%d", &students[i].weight);

    } // end for

    printf("\nEnter date of birth");
    printf("\n(order: day, month, year)\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("\ndob %d:\n",i+1);
        scanf("%d", &students[i].DOB.day);
        scanf("%d", &students[i].DOB.month);
        scanf("%d", &students[i].DOB.year);
    }
    while (getchar() != '\n');

    // Enter the first name for all elements in the array
    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter first name for student %d :", i + 1);
        fgets(students[i].firstname, LENGTH, stdin);

    } // end for

    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter surname for student %d :", i + 1);
        fgets(students[i].surname, LENGTH, stdin);

    } // end for

    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter eyecolor for student %d :", i + 1);
        fgets(students[i].eyecolor, LENGTH, stdin);

    } // end for

    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter country  for student %d :", i + 1);
        fgets(students[i].country, LENGTH, stdin);

    } // end for
}