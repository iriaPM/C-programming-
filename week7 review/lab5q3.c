#include <stdio.h>
int main()
{/*question3 Lab5  EVENLY divisible var1%var2==0
Author: Iria Parada Murciego 
Date: 1/11/22*/
    
      
    int num=0;
    int list=0;
    
    printf("Please enter a number between 1-5:\n");//input
    scanf("%d",&num);

    while(list>1,list++,list<=19)//list 1-20
        {
            if (list%num==0)//select evenly div. numbers from list
            {
                printf("%d,",list); //print evenly div. nums. from list
                
            }//end if
        }//end while
    printf("and %d\n",list);//no comma at the end
    

    return 0 ;

}//end main