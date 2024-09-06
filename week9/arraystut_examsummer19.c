/*
exam paper - q2 - summer 2019
 */
#include <stdio.h>

#define SIZE 5

int main()
{
    //part a 
    float Miles [SIZE];
    float Kilometers[SIZE];
    int i;

    //part b
    printf("enter %d values into miles array:\n",SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        scanf("%f",&Miles[i]);
        //part c
        Kilometers[i] = Miles[i];
        //part d 
        Kilometers[i] = (Miles[i]/SIZE * 8);

    }
    for ( i = 0; i < SIZE; i++)
    {
        printf("miles: %.1f km: %.1f\n", Miles[i], Kilometers[i]);

    }
    

    return 0;
}