/*tutorial week9 exam paper q1, numbres in ascending order arrays, 
programming statements is just writing a line of code not a program
sb q2
p1 -- 
#define ROW 2 
#define COL 2 
p2--
float matrix [ROW][COL];
P3--
int i,j;
for(i=0;i<ROW;I++)
{
    for (j=0;j<COL;j++)
    {
        scanf("%f",&matrix[i][j]);

        p4-- sum=sum+matrix[i][j];
    }
}
P4--avg=(float)sum/(ROW*COL);//(6)
    printf("the average is: %f",avg);
*/
#include <stdio.h>

#define SIZE 12

int main()
{
    int my_array[SIZE];
    int i;

    for ( i = 1; i < SIZE + 1; i++)
    {
        printf("%d\n",i);
        //instead of editing for loop condition just printf("%d",i+1);

    }
    
    return 0;
}