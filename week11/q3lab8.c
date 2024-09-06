/* 3x2array 
    enter values each el
    calculate / print sum row 0 row 1 row2 
    calc / print sum col0 col1 
    find highest num 
    DATE: 29/11/22
    author: Iria Parada Murciego
*/
#include <stdio.h>

#define ROW 3 
#define COL 2 

int main()
{
    int array[ROW][COL];
    int i, j ;
    int sum = 0 ;
    int sum2 = 0;
    int sum3 = 0 ;
    int colsum1=0;
    int colsum2 = 0;
    int highest = 0 ;
    printf("please enter %d numers\n",ROW*COL);

    for ( i = 0; i < ROW; i++)
    {
        for ( j= 0; j < COL; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }

    //sum r0 r1 r2
    for ( i = 0; i < ROW; i++)
    {
        for ( j= 0; j < COL; j++)
        {
            sum = array[0][0] + array[0][1];
            sum2 = array[1][0] + array[1][1];
            sum3 = array[2][0] + array[2][1];
        }
        
    }
    for ( i = 0; i < ROW; i++)
    {
        for ( j= 0; j < COL; j++)
        {
           colsum1 = array[0][0] + array[1][0] + array[2][0];
           colsum2 = array[0][1] + array[1][1] + array[2][1];
        }
        
    }
    
    highest = array[0][0];

    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            if (highest < array[i][j])
            {
                highest = array[i][j];
            }
            
        }
        
    }
    

    printf("sum row0 %d\nsum row1 %d\nsum row2 %d \n",sum, sum2,sum3 );
    printf("sum of col0: %d\nsum of col1: %d\n",colsum1,colsum2);
    printf("highest num: %d\n",highest);
    
    return 0; 
}