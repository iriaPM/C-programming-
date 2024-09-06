/*
lab9 q2 pointers a) b) 
Iria Parada Murciego
date: 6/12/22
*/
#include <stdio.h>
int main()
{   
    // a) declare num1,char1,ptr1,ptr2 and print content and adress
    int num1;
    char char1;
    int *ptr1;
    char *ptr2;
    int *ptr3;

    num1 = 3;
    char1 = 'A';

    ptr1 = &num1;
    ptr2 = &char1;
    ptr3 = &char1;
    printf("content of num1:%d \n num1 adress:%d \n\n content of char1:%c\n char1 adress:%d\n", num1,&num1,char1,&char1);
    
    //b) content of ptr1 ptr2
    printf("\nadress num1:%d\n adress char1:%d",ptr1,ptr2);

    //c) use deference operator
    printf("\n*ptr1:%d", *ptr1);
    printf("\n*ptr2:%d", *ptr2);

    //d)
    printf("\n&ptr1:%d", &ptr1);
    printf("\n&ptr2:%d" ,*&ptr2);

    //change delimeters
    printf("\n*ptr1:%c", *ptr1);
    printf("\n*ptr1:%c" ,*ptr1);

    //q2
    //a)
    printf("\n ptr3: %d", ptr3);
    printf("\n ptr3: %d", *ptr3);

    return 0;
}