/*Program Description: display contents of arr[8] to see its contents.
Author: Iria Parada Murciego
Date:  22/11/2022
*/
#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE];
    int i;
    
    for(i=0; i<SIZE; i++)
    {
        arr[i] = 9 -i;
        printf("%d\n",arr[i]);
    }
    //display contents of arr[8]
printf(".......................\n");
    for(i=0; i<SIZE; i++)
    {
        arr[i] = arr[arr[i]];
        printf("%d\n",arr[i]);
    }
    //display the contents of arr[8]

    return 0;
}