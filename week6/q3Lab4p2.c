#include <stdio.h>
int main()
{
    /*question 3 lab4 part 2 (q3)
        Author: Iria Parada Murciego
        Date: 25/10/22  */

    int var;
    int num;
    var=0;
    num=0;
    
    printf("please enter two integers:\n");
    scanf("%d%d",&var,&num);

    if (var%num==0)
        {
        printf("your numbers are evenly divisible");
        }//END IF 
    else
        {
        printf("your numbers are NOT evenly divisible");
        }//END ELSE
    return 0;
}//END MAIN