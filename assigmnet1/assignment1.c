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
    int pin;//pin the user is going to enter
    int newpin;//new pin for option2
    int newpin1;//to compare and see if new pin matches.
    
    //option3 counts for correct and incorrect number of times the pin was entered
    int sum,count1,incorrect,correct,count2,count3;
    char exit,end;//option4, option to exit the program
    
    
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
    
    printf("____________________\n");
    printf("\n|                   |\n");
    printf("       Welcome!      \n");
    
    //do..while loop so menu will execute at least once 
    do
    {   
        //decoration for atm 
        printf("_____________________\n");
        printf("\n|                   |\n");
        printf("         ATM         \n");
        printf("_____________________\n");
        //menu
        printf("\n1.Enter PIN\n2.Change PIN\n3.PIN count\n4.Exit\n");
        printf("_____________________\n");

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
                //case 1 to enter the pin and verify wheather its correct or incorrect
                printf("Please enter PIN:\n");
                scanf("%d",&pin);

                sum=count1++;//everytime case 1 is displayed  sum adds 1 

                //if user enters a character thats not 'enter'
                if (getchar()!='\n')
                {
                    printf("ERROR\n Please enter a number");
                    incorrect=count3++;//incorrect count 
                    break;
                }

                //if is num you entered is correct
                else if (pin==newpin)
                {
                    printf("Your PIN is correct\n");
                    correct=count2++;//correct count 
                }//end  else if

                //not 1234 or  num entered
                else
                {
                    printf("\n ERROR\nPlease enter correct PIN\n");
                    incorrect=count3++;//incorrect count
                }//end else 
                break;
            }//end case 1

            //make a new pin option
            case 2:
            {   
                printf("\nPlease enter NEW PIN:\n");
                scanf("%d",&newpin);

                //if user enters a character thats not 'enter'
                if (getchar()!='\n')
                {
                    printf("ERROR\n Please enter a number");
                    
                    break;
                }

                //range between 4 digits
                if (newpin>LOWER && newpin<HIGHER) 
                {
                    printf("please confirm new PIN:\n");
                    scanf("%d",&newpin1);

                    //two vars to compare if they match
                    if(newpin==newpin1)
                    {
                        printf("This is your new PIN: %d\n",newpin);//confirmation
                    }//end if inner

                    else
                    {
                        printf("\nERROR\nPIN do not match!\nTry Again\n");
                    }//end else inner

                }//end if outer

                //is not a four digit num(not in range)
                else
                {
                    printf("\nERROR\nPlease  TRY AGAIN and enter a 4 digit PIN.\n");    

                }//end else 
                break;
            }//end case2 

            //sum of number pin was entered in option1 correctly and incorrectly
            case 3:
            {   
                if (sum==1)
                {
                    //this will print time in singular 
                    printf("\nYou entered the PIN %d time.\nCorrectly:%d\nIncorrectly:%d\n",sum,correct,incorrect);
                }
                else
                {
                    //this will print 'time' in plural so 'times'
                    printf("\nYou entered the PIN %d times.\nCorrectly:%d\nIncorrectly:%d\n",sum,correct,incorrect);
                }
                break;
            }//end case3 

            //option to end program
            case 4:
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
                        printf("Going back to the menu...\n");
                        
                        break;
                    }//end case N
                    case ('n'):
                    {
                        printf("Going back to the menu...\n");
                        
                        break;
                    }//end case n
                    
                    // case user enters something other than no or yes program will continue
                    default:
                    {
                        printf("\n ERROR\nPLEASE enter Y or N\n");
                        break;
                    }//end default
                        
                }//end switch
                
                break;
            }//end case4

            default:
            {   
                //not a number from 1 to 4 
                printf("\nERROR\nPlease enter a NUMBER from the menu 1-4!!\n");
                break;
            }//end default

        }//end switch
        
    } //end do 
    while (exit!=end);
    //as long user doesnot enter Y or y program will continue
    
    return 0;
}//end main