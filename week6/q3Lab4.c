#include <stdio.h>
int main ()
{
    /*question 3 lab4 part 1 (q1)
        Author: Iria Parada Murciego
        Date: 25/10/22  */
    char marriage_status;

    printf("Please enter your marriage status:\nS = SINGLE\nM= MARRIED\nW= WIDOWED\nD= DIVORCED\nE=SEPARATED\n");
    scanf("%c",&marriage_status);
    switch (marriage_status)
    {
        case 'S':
        {
            printf(" You are single");
            break;
        }//end s
        case 's':
        {
            printf(" You are single");
            break;
        }//end s
        case 'M':
        {
            printf(" You are married");
            break;
        }//end mcase 'm'
        case 'm':
        {
            printf(" You are married");
            break;
        }//end mcase 'm'
        case 'w':
        {
            printf(" You are widowed");
            break;
        }//end w
        case 'W':
        {
            printf(" You are widowed");
            break;
        }//end w
        case 'E':
        {
            printf(" You are separated");
            break;
        }//end e
        case 'e':
        {
            printf(" You are separated");
            break;
        }//end e
        case 'D':
        {
            printf(" You are divorced");
            break;
        }//end d
         case 'd':
        {
            printf(" You are divorced");
            break;
        }//end d

        default:
        {
            printf("error:invalid answer");
            break;
        }//end default

    }//end switch
   
    return 0;
}//end main