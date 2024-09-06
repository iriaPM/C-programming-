#include <stdio.h>
int main()
{/*  lab5 q6 part6 -- teacher marks percentages  negative mark means end of program
     Author: Iria Parada Murciego
     Date: 1/11/22*/
    
    int mark;
    int sum;
    int count;
    float average;
    int i;
     
    mark=0;
    i=0;
    sum=0;

    do
    {
        printf("Please enter the percentage(num out of 100):(when done please type 0)\n");
        scanf("%d",&mark);
        printf("\nPercentage-->%d%%\n",mark); 
        count=i++;
        sum=sum+count;
        

    }//end do
    while (mark>0);
    {   
        average=sum/count;
        printf("\ncount:%d\nsum:%d\n",count,sum);
        printf("AVG:%f",average);
        //once it is negative num:
        printf("\nTHERE ARE NOT  MORE MARKS");
    }//end while

return 0;
}//end main