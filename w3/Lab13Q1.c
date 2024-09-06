/*
Lab 14 Question 1
*/

#include <stdio.h>

//Function signature
int squareArea(int *);
float circleArea(int *);


int main(void)
{
    int length = 0;
    int sq_area = 0;
    int radius = 0;
    float cir_area = 0;

    // Handle Square Area
    printf("Enter the length of a square\n");
    scanf("%d", & length);

    //Calculate the area of the square
    sq_area = squareArea(& length);

    printf("\nThe area of the square is %d", sq_area);

    // Handle Circle Area
    printf("\n\nEnter the radius of a circle\n");
    scanf("%d", & radius);

    //Calculate the area of the circle
    cir_area = circleArea(& radius);

    printf("\nThe area of the circle is %.2f", cir_area);
  
  return 0;
}


int squareArea(int *ptr)
{
    int area = 0;

    area = (*ptr) * (*ptr);

    return area;
} // end squareArea()


float circleArea(int *ptr)
{
    float area = 0;

    area = 3.14 * ((*ptr) * (*ptr));

    return area;

} // end circleArea()