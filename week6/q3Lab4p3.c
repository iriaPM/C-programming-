#include <stdio.h>
int main()
{
     /*question 3 lab4 part 3 (q5)
        Author: Iria Parada Murciego
        Date: 25/10/22  */
float side1;
float side2;
float side3;
float t1;
float t2;
float t3;

printf("Please enter three numbers:\n");
scanf("%f\n%f\n%f",&side1, &side2, &side3);

t1= side1+side2;
t2= side1+side3;
t3=side2+side3;

if (t1>side3)
    {
       printf("these numbers form a triangle\n"); 
    }//end if

else if  (t2>side2)
    {
      printf("these numbers form a triangle\n"); 
    } //end t2>side2
else if (t3> side1)
    {
        printf("these numbers form a triangle\n");
    } //end t3
else 
    {
        printf("these numbers do not form a triangle\n");
    }//end else 

return 0;
}//end main
//or do this:
/*IF ((side1 +side2)>side3 && (side2+side3)>side1 && (side3+side1)>side2)*/