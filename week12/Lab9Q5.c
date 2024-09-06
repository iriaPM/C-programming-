/*
Iria Parada Murciego
6/12/22
lab9 q5
*/
#define SIZE 5

#include <stdio.h>
int main()
{
    float array1[SIZE] = {0};
    float array2[SIZE] = {0};
    int i;

    float *ptr1;
    float *ptr2;


    printf("enter %d values into array1:\n",SIZE);

    for ( i = 0; i < SIZE; i++)
    {
        ptr1 = array1;

        scanf("%f", &ptr1[i]);

    }

    for ( i = 0; i < SIZE; i++)
    {
        
        array2[i] = array1[i];
        ptr2 = array2;
        printf("%f\n",ptr2[i]);
    }
    
    
    return 0;
}