#include <stdio.h>
int main()
{/*Question4 part5 Lab3 
    Author: Iria Parada Murciego
    Date:18/10/2022 */
    float num = 0;
    double var2= 525949.2;
    int var3= 75;
    
    
    printf("Type your age in years:\n");
    scanf("%f", &num);
//1 year = 525,949.2minutes 
        float var4= num*var2;
        float var5= var4*var3;
    printf("Number of Beats:%f\n",var5);

    return 0;
}