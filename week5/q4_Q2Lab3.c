#include <stdio.h>
int main()
{/*Question 4 part2 Lab3 
    Author:Iria Parada Murciego
    Date:18/10/2022*/
    int first=0;

    int second =0;
    int third = 0;
    int fourth =0;

    float principal =0;
    float rate = 0;
    float time = 0;
    
    char keyval1 =' ';
    char keyval2=' ';

    char c=' ';
    int i =0;
    float f=0;
    double d=0;


    printf("enter 4 integers, 3 floats and 2 characters and 1 character, 1 integer, 1 float and 1 double:\n");
    //single scanf()
    //a)
    scanf("%d\n",&first);
    //b)
    scanf("%d\n %d\n %d\n\n",&second,&third,&fourth);
    //c)
    scanf("%f\n %f\n %f\n\n",&principal,&rate,&time);
    //d)
    scanf("%c\n %c\n",&keyval1,&keyval2);
    //e)
    scanf("%c\n%d\n%f\n%d",&c,&i,&f,&d);


    printf("You entered Four integers:\n%d\n%d\n%d\n%d\n",first,second,third,fourth);
    printf("You entered Three floats:\n%f\n%f\n%f\n",principal,rate,time);
    printf("You entered Two charachters:\n%c\n%c\n",keyval1,keyval2);
    printf("You entered 1 character, 1 integer, 1 float and 1 double:\n%c\n%d\n%f\n%lf",c,i,f,d);

    return 0;
}