/*
Iria Parada Murciego
6/12/22
lab9 q4
*/
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;
    int *ptr1;
    int *ptr2;
    int *ptr3;

    printf("please enter 1 integer values:\n ");
    scanf("%d",&num1);
     printf("please enter 1 integer values:\n ");
    scanf("%d",&num2);


    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;

    *ptr3 = (*ptr1 + *ptr2);

    printf("sum:%d",*ptr3);
    return 0;
}