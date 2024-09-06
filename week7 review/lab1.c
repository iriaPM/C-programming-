#include <stdio.h>
int main()
{/*Question 1 lab5 (review week) Write a program using a while loop to display the numbers 1 - 10 in descending order
on the same line and each number separated by a comma e.g., 10,9,8,7,6,5,4,3,2,1
  Author: Iria Parada Murciego
  Date: 1/11/22*/ 

    int i =11;
   
        while (i<=10,i--,i>1)//less than 10, i-1 , i greater than 1 so it doesnt print 0. 
            
        printf("%d,",i);//sequence 
        printf("%d\n",i);// so it doesnt print comma in last number 
    return 0;

}//end main