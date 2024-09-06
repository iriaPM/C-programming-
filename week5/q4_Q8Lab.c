#include <stdio.h>
int main()
{/*Question4 part8 Lab3 
    Author: Iria Parada Murciego
    Date:18/10/2022 */
    float var1;
    float var2;
    float var3;

    printf("Please enter three floating numbers:\n");
    scanf("   %f\n   %f\n   %f",&var1,&var2,&var3);

    float sum = var1+var2+var3;
    float average = sum/3;

    printf("\na) The sum of the numbers is:\n   %.3f\n",sum);
    printf("b)The average is:\n   %.3f\n",average);

    return 0;
}