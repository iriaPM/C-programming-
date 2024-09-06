#include <stdio.h>
int main()
{/*Program Description: Question3 Lab3- ask user to enter any 3 float numbers.
Author: Iria Parada Murciego
Date: 18/10/2022 */
    float var = 0;
    float var1= 0;
    float var2 = 0;

    
    printf("Enter first float number\n");
    scanf("%f", &var);

    printf("Enter second float number\n");
    scanf("%f", &var1);

    printf("Enter third  float number\n");
    scanf("%f",&var2);
    //first num. 4 decimal places 
    //second num. 3 decimal places
    //third num. No decimal places
    printf("You entered: \n %.4f\n %.3f\n %.f",var,var1, var2);
    return 0;
}