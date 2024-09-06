/*



*/


/*
Pointer variables and Structures - Pass by Reference
*/
#include <stdio.h>
#include <string.h>


define SIZE 5


//Structure template(s)
struct student_rec
{
   int Flightnumber;
   char Airlinename[21];
   char passangersurname[21];
   int seatnum;
   int numofbags;
   char destination[21];
   
};


// Function signature(s)
// Pass by Value, a COPY is passed
void display(struct student_rec);

// Pass by Reference, the address location is passed
void enter(struct student_rec *);


int main()
{
   struct student_rec student;

    
   // Enter the data into the structure student variable
   enter(& student);

   //Display the contents of the structure variable student
   display(student);
  
   return 0;
} // end main()#



/*
Function enter is used to enter the contents of a structure variable parameter
*/
void enter(struct student_rec *ptr)
{
   int i;


   printf("\nEnter flight number:  ");
   scanf("%d", & ptr -> Flightnumber);

    printf("\nEnter seat num: ");
   scanf("%d", & ptr -> seatnum);

   printf("\nEnter bags number: ");
   scanf("%d", & ptr -> numofbags);
  
   //scanf("%d", & (*ptr).flightnumber);

   // Clear the stdin buffer so that the 'Enter' key is not being read
   while(getchar() != '\n');

   printf("\nEnter first name: ");
   //scanf("%s", ptr -> firstname);
   fgets(ptr -> Airlinename, 20, stdin);

   printf("\nEnter surname: ");
   //scanf("%s", ptr -> surname);
   fgets(ptr -> passangersurname, 20, stdin);

   printf("\nEnter destination: ");
   //scanf("%s", ptr -> destination);
   fgets(ptr -> destination, 20, stdin);

   printf("\nEnter %d results\n", SIZ  E);

   

} // end enter()



/*
Function display is used to display the contents of a structure variable parameter
*/
void display(struct student_rec stu)
{
   int i;

    

   printf("\nflight num is: %d", stu.Flightnumber);

   printf("\nseat number is: %d", stu.seatnum);

    
   printf("\nnumber of bags is: %d", stu.numofbags);
  
   // Display the first name
   printf("\n Airline naem: %s", stu.Airlinename);
    
   // Display the surname
   printf("\nSurname is: %s", stu.passangersurname);

    // Display the destination
   printf("\ndestination is: %s", stu.destination);

   

} // end display()