/*
Write a program using an array that will allow the user to input 3 temperature
readings in Fahrenheit. After all the temperatures have been read from the keyboard,
display each of these temperatures on the screen and its corresponding temperature in
Celsius.  --  Q2 LAB6
Author: Iria Parada Murciego
Date: 15/11/22
*/

#include <stdio.h>

#define SIZE 3

int main()
{

    float temp[SIZE]={0};
    float farh[SIZE]={0};

    int i;

    printf("pease enter %d tempearatures reading in farenheit:\n",SIZE);

    for(i=0; i< SIZE; i++)//enter into array
    {
        scanf("%f",&farh[i]);
    }

    for(i=0; i< SIZE; i++)//enter into array
    {
        temp[i]=((farh[i]-32.0)*(5.0/9.0));
        printf("\n%1.f this is your temp in celsisus: %.f\n",farh[i],temp[i]);
    }    
     
    return 0;
}//end main