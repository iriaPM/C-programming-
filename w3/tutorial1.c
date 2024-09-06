/*lab12 q1 -- tutorial week3*/


#include <stdio.h>

int evenOdd(int);


int main(void)
{

    int num = 0;
    int check = 0;

    printf("enter any posistive number\n");
    scanf("%d", &num);

    check = evenOdd(num);



    if(check == 1)
    {
        printf("\neven");
    }
    else
    {
        printf("\nodd");
    }

    return 0;
}//end main


int evenOdd(int number)
{
    if ((number % 2)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}//end evenodd