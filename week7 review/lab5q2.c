#include <stdio.h>
int main()
{
    /*question2 lab5 review week if number even halve it, if number odd *3,+1
    Author: Iria Parada Murciego
    Date:1/11/22*/
    int num1=0;
    int total=0;
    //its only executing once 
        do
        {
            printf("Please enter a positive integer:\n");
            scanf("%d",&num1);//if %=1 odd,,, if %=0 even
        }while (num1<1); 
        //so it ends when is equal to one 

        printf("Initial value is: %d\n",num1);
        //keep going until num not equal 1 :
        do
        {
                if ((num1%2)==0)//even
                {
                        num1 = num1/2;
                }//end if
                else  //((num1%2)==1) odd
                {
                        num1 = (num1*3)+1;
                }//end else

                total++ ;
                if (num1!=1);
                {
                        printf("\nNext value is: %d",num1);
                        
                }//end if

                //total = total+num1;  
        }while (num1!=1);
        
        printf("\nFinal value is %d number of steps %d\n",num1,total);
        
        return 0;
}//end main