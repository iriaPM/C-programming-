// Iria Parada Murciego 31/1/2023
// lab11 semester2 week2    Q2
//highest / lowest num. 

#include <stdio.h>

int lowestval(int, int, int);
int highestval(int, int, int);

int main()
{

    int num1, num2, num3;
    int min = 0;
    int max = 0;

    printf("enter three whole numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    //find the lowest value
    min = lowestval(num1,num2,num3);
    max = highestval(num1, num2, num3);

    printf("\nlowest value is: %d",min);
    printf("\nhighest value is: %d",max);

    return 0;
}//end main


int lowestval(int n1, int n2, int n3)
{
    int lowest = 0;

    if(n1<n2 && n1< n3)
    {
        lowest = n1;
    }//end if
    else if (n2<n1 && n2<n3)
    {
       lowest = n2;
    }//end if
    else 
    {
        lowest = n3;
    }//end else

    return lowest;

}//end lowestval 

int highestval(int n1, int n2, int n3)
{
    int highest = 0;

    if(n1>n2 && n1> n3)
    {
        highest = n1;
    }//end if
    else if (n2>n1 && n2>n3)
    {
       highest = n2;
    }//end if
    else 
    {
        highest = n3;
    }//end else

    return highest;

}//end highest val