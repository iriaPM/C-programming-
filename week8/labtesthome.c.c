#include <stdio.h>
int main()
{/*Lab test 1 week8-- Fibonacci Series-- ask user to enter num of terms 
display fibonacci up to term entered. 
   Author: Iria Parada Murciego 
   Date: 08/11/2022*/

   int menu;
   int num, t1,t2,nextterm,i;
    menu=0; 
   num=0;
   i=1;
   t1=1;
   t2=1;
   nextterm=t1+t2;


    //sum of current number and previous number = next
    //1+1=2, 1+2=3 ,2+3+5


 do
{
    printf("\nWelcome to the Fibonacci series program\n\n");
    printf("Please enter your selection:\n 1.Enter the number of terms to display in the sequence and display the sequence.\n 2.End Program\n");
    scanf("%d",&menu);


   
   switch (menu)//selection menu
   {
        case 1:
        {
                printf("please enter a number  integer:\n");
                scanf("%d",&num);
            
                for (i==3;i<num;i++)//list 1 to number from keyboard 
                {
                    
                    printf("%d,",nextterm);
                    t1=t2;
                    t2=nextterm;
                    nextterm=t1+t2;                  
                
                }
                printf("%d\n",nextterm);// so it doesnt print comma in last number 

                break;
         }//END CASE 1 
        case 2:
        {
            printf("\n");
            break;
        }
            
        default://error checking 
        {
            printf("ERROR SELECT 1 OR 2.");
            break;
        }//END DEFAULT 

   }//END SWITCH
    
}//end do 
while (menu!=2);//if not 1 (2)end of program 
{
    printf("\nYou have ended the program.\n");
    
}//end while
 

return 0;
}//end main