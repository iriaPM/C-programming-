#include <stdio.h>
int main ()
{
    /*question 2 lab4 say if num is even or odd
        Author: Iria Parada Murciego
        Date: 25/10/22  */
    int var;
   
    printf("Enter an Integer between 1 and 100\n");
    scanf("%d",&var);

    if ((var%2)==0)   
    { 
            printf("this number is even\n%d",var);
            
    }//END if

    else 
    {
         printf("this number is odd\n %d",var);
        
    }//end else 
        

    
    return 0;
}//end of main