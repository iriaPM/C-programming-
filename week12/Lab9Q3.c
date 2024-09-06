/*
Iria Parada Murciego
6/12/22
lab9 q3
*/
#include <stdio.h>
int main()
{
    float input1;
    float input2;

    float *ptr1;
    float *ptr2;

    input1 = 45.67;
    input2 = 22.44;
    ptr1 = &input1;
    ptr2 = &input2;

    //a) print adress input1 input 2
    printf("\nadress input1:%d\n adress input2:%d", &input1,&input2);

    //b)print  adress ptr1 ptr2
    printf("\nadress ptr1:%d\nadress ptr2:%d", &ptr1, &ptr2);
    
    //c) print adress input1 input 2
    printf("\nadress input1:%d\n adress input2:%d", ptr1,ptr2);

    //d) deference operator
    printf("\ncontent ptr1:%f\ncontent ptr2:%f",*ptr1,*ptr2);


    return 0;
}