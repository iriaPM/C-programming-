#include <stdio.h>
int main()
{/* question6 lab5 part8 -- christmas tree inputs drawing (numbers of stars)
    Author: Iria Parada Murciego
     Date: 1/11/22*/
int tiles;
    int stars=1;
    int stars1,stars2,stars3=1;
    printf("please enter the number of tiles:\n");
    scanf("%d",&tiles);

//2nd tile
do
{
   
    switch (tiles)
    {
    case (1):
    {
        printf("*\n");
        for ( stars = 1; stars < 4; stars++)
        {
            printf("*");

        }//end for
        break;
    }
    case (2):
    {
        printf("*\n");
        for ( stars = 1; stars < 4; stars++)
        {
            printf("*");

        }//end for1st
        printf("\n*\n");
        for ( stars = 1; stars < 4; stars++)
        {
            printf("*");

        }//end for1st
        printf("\n");
        for ( stars = 1; stars < 6; stars++)
        {
            printf("*");

        }//end for 2nd

        break;

    }//end case2
    case (3):
    {
        printf("*\n");
        for ( stars = 1; stars < 4; stars++)
        {
            printf("*");

        }//end for1st
        printf("\n*\n");
        for ( stars = 1; stars < 4; stars++)
        {
            printf("*");

        }//end for1st
        printf("\n");
        for ( stars = 1; stars < 6; stars++)
        {
            printf("*");

        }//end for 2nd
        printf("\n*\n");
        for ( stars = 1; stars < 4; stars++)
        {
            printf("*");

        }//end for 1st
        printf("\n");
        for ( stars = 1; stars < 6; stars++)
        {
            printf("*");

        }//end for2nd
         printf("\n");
        for ( stars = 1; stars < 8; stars++)
        {
            printf("*");

        }//end for3rd
        
        break;

    }//end case3 
    
    default:
            printf("ERROR:please enter in between 1 and 5 tiles");
        break;
    }//ens switch
    


} while (stars > 1,stars < 1);



    //tree stand
    printf("\n   |\n===v===\n");
    return 0;
}//end main
   