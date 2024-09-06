/*
Prog desc

Author:
Date:

*/

#include <stdio.h>

int main()
{
    const float pi = 3.14;
    float area = 0;
    float radius = 4.8;

    // calculate the area of the circle
    area = pi * (radius * radius);

    printf("The area of the circle is %f", area);

    return 0;   
}