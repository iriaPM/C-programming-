// Program description lab10 q1 --q11 from book 
// pointers
// Iria Parada Murciego
// 13/12/22

#include <stdio.h>

#define SIZE 5

int main(){

    float litres [SIZE]= {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles [SIZE]=  {471.5, 358.72, 495.3, 453.6, 421.6};
    float mpl [SIZE] = {0};
    int i;

    //divide each el in yhe miles by corresponding el in the litres array
    for ( i = 0; i < SIZE; i++)
    {
        mpl[i] = miles[i] / litres [i];

    }//end for
    
    //display contents of mpl
     for ( i = 0; i < SIZE; i++)
    {
        printf("%.1f ",mpl[i]);

    }//end for

printf("\n");
    //array_name[i] = *(array_name + i) 
     //divide each el in yhe miles by corresponding el in the litres array
    for ( i = 0; i < SIZE; i++)
    {
        *(mpl+i) = *(miles+i) / *(litres + i);

    }//end for
    
    //display contents of mpl
     for ( i = 0; i < SIZE; i++)
    {
        printf("%.1f ", *(mpl+i) );

    }//end for



    return 0;
}