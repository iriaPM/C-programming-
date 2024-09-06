#include <stdio.h>
int main()
{ /*Question4 part6 Lab3 
    Author: Iria Parada Murciego
    Date:18/10/2022 */

    float temp = 0;
    
   printf("Enter a temperature in degrees Fahrenheit:\n");
   scanf("%f", &temp);
   float Celsius =(temp-32.0)*(5.0/9.0);
   printf("This is the temperature in Degrees Celsius:\n %.f",Celsius);

    return 0;
}