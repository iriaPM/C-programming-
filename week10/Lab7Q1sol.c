#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE];
    int i;

    for(i = 0; i < SIZE; i++)
    {
        arr[i] = (SIZE -1) - i;

        printf("%d ", arr[i]);
        
    } // end for

    printf("\n\n");

    
    for(i = 0; i < SIZE; i++)
    {
        arr[i] = arr[ arr[i] ];

        printf("%d ", arr[i]);
        
    } // end for

    // check arr[8]
    printf("\n\narr[8] contains: %d", arr[8]);
    
  return 0;
}