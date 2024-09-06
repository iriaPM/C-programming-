/*Program description:
write program to input values to a 4*5 array
search array for values that are less than 0 
display these values  along with their row and col.
*/

#include <stdio.h>

#define ROW 4
#define COL 5

int main()
{
    int arr[ROW][COL]={0};
    int i,j;

    printf("please enter %d values:\n",ROW*COL);
    //input arra el.
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            scanf("%d",&arr[i][j]);
        }//end inner
        
    }//end outer

    //search val <0
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            if (arr[i][j] <0)
            {
                printf("\nrow %d \ncol %d values:%d\n",i,j,arr[i][j]);
            }//end if 

        }//end inner
        
    }//end outer

    return 0;
}