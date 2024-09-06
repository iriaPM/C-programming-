/*
This program calculates the (i) volume and (ii) surface area of a box with specified dimensions

Author: MC
Date: Oct 12, 2021
*/

#include <stdio.h>

int main()
{
    float length;
    float height;
    float width;

    float volume;
    float s_area;

    length = 11.5;
    height = 10;
    width = 2.5;

    volume = 0;
    s_area = 0;


    // Part (i)
    // Calculate and display the box volume

    volume = length * height * width;

    printf("The volume of the box is %f", volume);


    // Part (ii)
    // Calculate and display the surface area of the box

    s_area = (2 * (length * height)) + (2 * (length * width)) + (2 * (height * width));
    printf("\n\nThe surface area of the box is %f", s_area);

    return 0;
}