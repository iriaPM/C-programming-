#include <stdio.h>

int main()
{/* Program Description: Question2 Lab2- Write a program to compute and display on separate lines -the volume-the surface area 
    Author: Iria Parada Murciego
    Date: 11th of October 2022
*/
    int height1 =10;
    float length1 =11.5;
    float  width1 =2.5;
//store the volume/ surface area in a variable 
    float volume =0;
    float surfacearea= 0;

        volume = height1*length1*width1;

    printf("\nVolume is %.1f", volume);

        surfacearea= 2*(length1*width1 + length1*height1 + width1*height1);
    printf("\nSurface Area if %.1f", surfacearea);

   // printf("The volume is %.1f",height1*length1*width1);
    //printf("\nThe Surface Area is %.1f", 2*(length1*width1 + length1*height1 + width1*height1 ) );

    return 0;
}