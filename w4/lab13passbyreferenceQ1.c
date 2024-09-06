
/*

    Iria Parada Murciego 
    14/2/23
    Q1 pass by refernece 
    lab13

*/


#include <stdio.h> 

#define SIDES 4 // square sides

#define PI 3.14 // pi number

//memory adress will be adressed
void AreaSquare(int *);
void AreaCircle(int *);

int main()
{
    int lensizesquare;
    int radius;

    printf("please enter the length of the size of a square:\n");
    scanf("%d", &lensizesquare);

    printf("please enter the radius of the circle:\n");
    scanf("%d", &radius);

    //pass adress od var to the function
    AreaSquare(&lensizesquare);
    AreaCircle(&radius);

    printf("\n lengsizesuarqe contains %d", lensizesquare);
    printf("\n area circle contains %d", radius);

    return 0;
}//end main

//access adress location and its content using deference operator

void AreaSquare(int *n1)
{
    int area;

    area = ((n1) * (SIDES));

    printf("\nArea of the Square: %d\nlength od sides: %d", area, *n1);

}//end funtion square 

void AreaCircle (int *n2)
{
    int area;

    area = ((PI) * (n2));
    printf("\n Area of circle is %d", area);
}