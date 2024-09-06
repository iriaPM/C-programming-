/*
Pointer variables and Structures - Pass by Reference
*/
#include <stdio.h>
#include <string.h>

#define SIZE 5

struct date_of_birth
{
    int day;
    int month;
    int year;
};

// Structure template(s)
struct student_rec
{
    int height;
    int weight;
    char firstname[21];
    char surname[21];
    char eyecolor[21];
    char country[21];
    struct date_of_birth DOB;
};
struct student_rec2
{
    int height;
    int weight;
    char firstname[21];
    char surname[21];
    char eyecolor[21];
    char country[21];
    struct date_of_birth DOB;
};

// Function signature(s)
// Pass by Value, a COPY is passed
void display(struct student_rec);

void display2(struct date_of_birth);

// Pass by Reference, the address location is passed
void enter(struct student_rec *ptr);

void enter2(struct date_of_birth *ptr);

int main()
{
    struct student_rec student;
    struct date_of_birth DOB;
    struct student_rec2 student2;

    // Enter the data into the structure student variable
    enter(&student);
    enter2(&DOB);

    memcpy(&student2,&student,sizeof(struct student_rec2));

    // Display the contents of the structure variable student
    display(student);
    display(student2);ó
    display2(DOB);

    

    return 0;
} // end main()

/*
Function enter is used to enter the contents of a structure variable parameter
*/
void enter(struct student_rec *ptr)
{
    

    printf("\nEnter height: ");
    scanf("%d", &ptr->height);

    printf("\nEnter weight: ");
    scanf("%d", &ptr->weight);

    // scanf("%d", & (*ptr).height);

    // Clear the stdin buffer so that the 'Enter' key is not being read
    while (getchar() != '\n')
        ;

    printf("\nEnter first name: ");
    // scanf("%s", ptr -> firstname);
    fgets(ptr->firstname, 20, stdin);

    printf("\nEnter surname: ");
    // scanf("%s", ptr -> surname);
    fgets(ptr->surname, 20, stdin);

    printf("\nEnter eye color: ");
    // scanf("%s", ptr -> firstname);
    fgets(ptr->eyecolor, 20, stdin);

     printf("\nEnter country: ");
    // scanf("%s", ptr -> firstname);
    fgets(ptr->country, 20, stdin); 

    

} // end enter()
void enter2(struct date_of_birth *ptr)
{
    printf("\nEnter day: ");
    scanf("%d", &ptr->day);

    printf("\nEnter month: ");
    scanf("%d", &ptr->month);

    printf("\nEnter year: ");
    scanf("%d", &ptr->year);

}


/*
Function display is used to display the contents of a structure variable parameter
*/
void display(struct student_rec stu)
{
    

    printf("\nStudent Record\n");
    printf("\nheight is: %d", stu.height);
    printf("\nweight is: %d", stu.weight);

    // Display the first name
    printf("\n\nFirstname: %s", stu.firstname);

    // Display the surname
    printf("\nSurname is: %s", stu.surname);

    printf("\nEye color is: %s", stu.eyecolor);

    printf("\ncountry is: %s", stu.country);
  


} // end display()

void display2(struct date_of_birth stu)
{
    printf("\n DOB is: %d/%d/%d", stu.day, stu.month,stu.year);
}