#include <stdio.h>
int main()
{/*Lab test 1 week8-- Fibonacci Series-- ask user to enter num of terms 
display fibonacci up to term entered. 
   Author: Iria Parada Murciego 
   Date: 08/11/2022*/

   int menu;
   int num, list,sum,count;
    menu=0; 
   num=0;
   list=0;
   sum=0;
   count=0;

    //sum of current number and previous number = next
    //1+1=2, 1+2=3 ,2+3+5


do
{
    printf("Welcome to the Fibonacci series program\n\n");
    printf("Please enter your selection:\n 1.Enter the number of terms to display in the sequence and display the sequence.\n 2.End Program\n");
    scanf("%d",&menu);

   
   switch (menu)//selection menu
   {
        case 1:
        {
                printf("please enter a number  integer:\n");
                scanf("%d",&num);
                 
                count=num++; //count of num in list
            
                for (list>1;list<=num;list++)//list 1 to number from keyboard 
                {
                
                    printf("%d,",list);
                    sum=sum+count;//sum of num in list
                
                }
                printf("%d\n",list);// so it doesnt print comma in last number 

                break;
         }//END CASE 1 
            
        default://error checking 
        {
            printf("ERROR SELECT 1 OR 2.");
            break;
        }//END DEFAULT 

   }//END SWITCH
    
}//end do 
while (menu>0,menu<2);//if not 1 (2)end of program 
{
    printf("\nYou have ended the program.\n");
    
}//end while
 

return 0;
}//end main