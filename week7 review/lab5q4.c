#include <stdio.h>
int main()
{ /*Author: Iria Parada Murciego
  Date: 1/11/22*/ 
    int num=0;
    while(num>0,num++,num<=10)//list

    switch (num)//select 3 and 7 
    {
        case (3):
        {
            printf("This number is three\n");
            break;
        }
        case (7):
        {
            printf("This number is seven\n");
            break;   
        }
        default://the ones arent 3 and 7 printed as "num"
        {
            printf("%d\n",num);
            break;
        }
    }

    

    return 0;
}//end main