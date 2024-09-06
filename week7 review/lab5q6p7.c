#include <stdio.h>
int main()
{/* lab5 q6 part7-- display hour and minutes in 24hclock  
    Author: Iria Parada Murciego
    Date: 1/11/22*/
    int hour;
    int min;
    int sec;
    for ( hour = 0; hour < 12; hour++)//12hours clock
    {
        for ( min = 0; min < 60; min+=15)//15min interval 
       //for (min=1;min<60;min++)//no interval 
        {
           
            printf("%d:%d,",hour,min);

        }//inner min
        
    }//outer hour
    printf("%d:00\n",hour);//no comma at the end 

    return 0;
}//end main