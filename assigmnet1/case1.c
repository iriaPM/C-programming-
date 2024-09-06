#include <stdio.h>

#define DEFPIN 1234//default pin
#define LOWER 1000//LOWER 4 digit number
#define HIGHER 9999//highest 4 digit num
#define MENU_NUM 4 //number of options in menu



int main()
{
    int num;//num for menu
    int pin; 
    int newpin;
    int newpin1;
    int sum,count1,incorrect,correct,count2,count3;
    char word,passw;
    char exit;
    char end;
    num=0;
    pin=0;
    newpin=0;
    newpin1=0;
    sum=0;//total count pin entered
    incorrect=0;//incorrect count pin entered
    correct=0;//correct sum pin entered
    count1=1;//to start the correct sum
    count2=1;//start incorrect count
    count3=1;//start of count

    int i,j;
    //printf("  ");
    for ( i = 1; i < 16; i++)
    {
       
        printf("__");
    }
    printf("\n");
    for ( i = 1; i < 2; i++)
    {
       
        printf("\n|          WELCOME!!         |\n");
    }
    

    do
    {
        for ( i = 1; i < 16; i++)
        {
        
            printf("__");
        }
        printf("\n");
        for ( i = 1; i < 2; i++)
        {
        
            printf("\n|            ATM             |\n");
        }
        for ( i = 1; i < 16; i++)
        {
        
            printf("__");
        }
        printf("\n");

        //menu
        printf("\n1.Enter PIN\n2.Change PIN\n3.PIN count\n4.Exit\n");
        scanf("%d",&num);
        switch (num)//menu selection
        {
            
            
           case 4://program has ended
            {
                printf("Are you sure you want to EXIT?\nYES=Y NO=N\n");//END 
                scanf("%s",&exit);

                
                    switch (exit)
                    {
                        case ('Y'):
                        {
                            printf("Program has ended\n  THANK YOU!\n");
                            end=exit;
                            break;
                        }
                        case ('y'):
                        {
                            printf("Program has ended\n  THANK YOU!\n");
                            end=exit;
                            break;
                        }
                        case ('N'):
                        {
                            printf("You go back to the menu...\n");
                            
                            break;
                        }
                        case ('n'):
                        {
                            printf("You go back to the menu...\n");
                            
                            break;
                        }
                        
                        default:
                        {
                            printf("ERROR, PLEASE enter Y or N\n");
                            break;
                        }
                            
                    }
                

                break;
            }//end case4

            default:
            {   //not a number from 1 to 4 
                printf("\nERROR\nPlease enter a NUMBER from the menu 1-4!!\n");
                break;
            }//end default
       
        }//end switch

    } //end do 
    while (exit!=end);//as long as its NOT 4  program will continue
    
    

    return 0;
}//end main