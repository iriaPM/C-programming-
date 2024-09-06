#include <stdio.h>
int main()
{ /*Q3 lab4 part4 (q6)
Author  Iria Parada Murciego
Date 25/10/22*/
int var;

printf("enter a  single number from 1-9 \n");
scanf("%d",&var);
//nested if 
if (var ==1) 
    {
        printf("One");
    }
else
    if (var ==2) 
    {
        printf("Two");
    }
    else 
        if (var==3) 
        {
            printf("Three");
        }
        else
            if(var==4) 
            {
                printf("Four");
            }
            else
                if (var==5) 
                {
                    printf("Five");
                }
                else    
                    if(var==6) 
                    {
                        printf("Six");
                    }
                    else
                        if(var==7) 
                        {
                            printf("Seven");
                        }
                        else 
                            if(var==8) 
                            {
                                printf("Eight");
                            }
                            else 
                                if(var==9) 
                                {
                                    printf("Nine");
                                }
                            else 
                                {
                                    printf("Number not valid! :(");
                                }


    return 0;
}//end main