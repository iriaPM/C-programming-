#include <stdio.h>
int main()

{/*
/* Q5 lab5 --even num. 1 to 100 displayed using %
    Author: Iria Parada Murciego
  Date: 1/11/22*/ 
    
   // int list=0;
    
/*
    while(list>=1,list++,list<=99)//list 1-20
        {
            if ((list%2)==0)//select even
            {
                printf("%d,",list); // even nums. from list
                
            }//end if
        }//end while
    printf("and %d\n",list);//no comma at the end
    */
   int num, list,sum,sum1,count,i;
   // menu=0; 
   num=0;
   list=0;
   sum =0;
   count,i=0;
   sum1=0;

   printf("please enter a number  integer:\n");
        scanf("%d",&num);

        count=num++;
        for (list>1;list<=num;list++)
        {
            
            printf("%d,",sum1);
            sum=sum+count;
            sum1=sum+list;

        }
         count=num++;

        printf("%d\n",list-1);// so it doesnt print comma in last number 
        printf("sum%d,count%d\n",sum,count);
    
           

}//end main
    