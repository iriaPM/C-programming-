/*
Program description: Assigment 1 -- enable bank customers to manage their PIN on ATM.
PIN is a 4 digit number. default 1234
menu driven: 1-enter pin verify
            2- change pin
            3- display number of times pin has been entered i)correct,ii)incorrect
            4-exit 
Author: Iria Parada Murciego--C22305863
Date: 1/11/2022 -20/11/2022 
*/

#include <stdio.h>

#define DEFPIN 1234//default pin
#define LOWER 1000//LOWER 4 digit number
#define HIGHER 9999//highest 4 digit num

int main()
{
    int num;//num for menu
    int pin; 
    int newpin;
    int newpin1;
    int sum,count1,incorrect,correct,count2,count3;
    char exit,end;
    int i,j;

    num=0;
    pin=0;
    newpin=DEFPIN;
    newpin1=0;
    sum=0;//total count pin entered
    incorrect=0;//incorrect count pin entered
    correct=0;//correct sum pin entered
    count1=1;//to start the correct sum
    count2=1;//start incorrect count
    count3=1;//start of count

    
    
    do
    {  
        

        //menu
        printf("\n1.Enter PIN\n2.Change PIN\n3.PIN count\n4.Exit\n");
        scanf("%d",&num);

        //if user enters character
        //reinitialize num 
        //so the second time user enters char in num it will not go back to the last number entered.
        //so char will be 0 and will become an error so 'default' will display
        if (getchar()!='\n')
        {  
            num=0;
        }

        switch (num)//menu selection
        {
            case 1:
            {
                
                printf("Please enter PIN:\n");
                scanf("%d",&pin);

                sum=count1++;//everytime case 1 is displayed  sum adds 1 

                //if user enters a character thats not 'enter'
                if (getchar()!='\n')
                {
                    printf("ERROR\nPlease enter a number\n");
                    incorrect=count3++;//incorrect count 
                    break;
                }

                else if (pin==newpin)//if is num you entered is correct
                {
                    printf("Your PIN is correct\n");
                    correct=count2++;//correct count 
                }//end  else if

                else//not 1234 or  num entered
                {
                    printf("\nERROR\nPlease enter correct PIN\n");
                    incorrect=count3++;//incorrect count
                }//end else 
                break;
            }//end case 1

            case 2:
            {   
                printf("\nPlease enter NEW PIN:\n");
                scanf("%d",&newpin);

                //if user enters a character thats not 'enter'
                if (getchar()!='\n')
                {
                    printf("ERROR\n Please enter a number\n");
                    
                    break;
                }

                if (newpin>LOWER && newpin<HIGHER)//range between 4 digits 
                {
                    printf("please confirm new PIN:\n");
                    scanf("%d",&newpin1);

                    if(newpin==newpin1)//two vars to compare if they match
                    {
                        printf("This is your new PIN: %d\n",newpin);//confirmation
                    }//end if inner

                    else
                    {
                        printf("\nERROR\nPIN do not match!\nTry Again\n");
                    }//end else inner

                }//end if outer

                else//is not a four digit num(not in range)
                {
                    printf("\nERROR\nPlease  TRY AGAIN and enter a 4 digit PIN.\n");    

                }//end else 
                break;
            }//end case2 

            case 3://sum of number pin was entered in option1 correctly and incorrectly
            {   
                printf("\nYou entered the PIN %d times.\nCorrectly:%d\nIncorrectly:%d\n",sum,correct,incorrect);
                break;
            }//end case3 

            case 4://option to end program
            {
                printf("Are you sure you want to EXIT?\nYES = Y\nNO = N\n");//MAKE SURE USER WANTS TO EXIT
                scanf("%s",&exit);

                
                switch (exit)
                {
                    //case  user enters Y or y the program will end
                    case ('Y'): 
                    {
                        printf("Program has ended\n  THANK YOU!\n");
                        end=exit;
                        break;
                    }//end case Y
                    case ('y'):
                    {
                        printf("Program has ended\n  THANK YOU!\n");
                        end=exit;
                        break;
                    }//end case y

                    //case user enters n or N the program will continue
                    case ('N'):
                    {
                        printf("\nGoing back to the menu...\n");
                        
                        break;
                    }//end case N
                    case ('n'):
                    {
                        printf("\nGoing back to the menu...\n");
                        
                        break;
                    }//end case n
                    
                    // case user enters something other than no or yes program will continue
                    default:
                    {
                        printf("\nERROR\nPLEASE enter Y or N\n");
                        break;
                    }//end default
                        
                }//end switch
                
                break;
            }//end case4

            default:
            {   //not a number from 1 to 4 
                printf("\nERROR\nPlease enter a NUMBER from the menu 1-4!!\n");
                break;
            }//end default

        }//end switch

    } //end do 
    while (exit!=end);
   
    //as long user doesnot enter Y or y program will continue
    
    return 0;
}//end main