#include <stdio.h>
int main()
{
    /*question 3 lab 4 part 5 (q7)
    Author: Iria Parada Murciego
    Date:25/10/22*/

    int day_week;

    printf("please enter a number from 1 to 7,\n 1 = Sunday\n 2=Monday\n 3=Tuesday\n 4=Wednesday\n 5=Thursday\n 6=Friday\n 7=Saturday\n ");
    scanf("%d",&day_week);

    switch (day_week)
    {
        case 1:
        {
            printf("Sunday");
            break;
        }//end 1 
        case 2:
        {
            printf("Monday");
            break;
        }//end 2
        case 3:
        {
            printf("Tuesday");
            break;
        }//end 3
        case 4:
        {
            printf("Wednesday");
            break;
        }//end 4
        case 5:
        {
            printf("Tursday");
            break;
        }//end 5
        case 6:
        {
            printf("Friday");
            break;
        }//end 6
        case 7:
        {
            printf("Saturday");
            break;
        }//end 7
        default:
            {
                printf("Error: Please enter a number between 1 and 7 ONLY!!");
            }//END DEFAULT 

    }//end switch
    
    return 0;
}//end main