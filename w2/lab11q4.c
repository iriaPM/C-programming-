// Iria Parada Murciego 31/1/2023
// lab11 semester2 week2    Q2
// calculate sum and average

#include <stdio.h>
#define SIZE 3

int sum(int,int,int);
int average(int,int,int);

int main()
{    
    int num1, num2, num3;
    int sum_var = 0;
    int average_var = 0;

    printf("enter three whole numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    //execute functions
    sum_var = sum(num1,num2,num3);
    average_var = average(num1, num2, num3);

    printf("\nsum is: %d",sum_var);
    printf("\naverage is: %d",average_var);

    return 0;
}//end main

int sum(int n1, int n2, int n3)
{
    int add = 0;

    add = n1 + n2 + n3;

    return add;

}//end sum

int average(int n1, int n2, int n3)
{
    int aver = 0;

    aver = (n1 + n2 + n3)/SIZE;

    return aver;
    
}//end sum