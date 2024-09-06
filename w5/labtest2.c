/*
    Iria Parada Murciego
    c22305863

    21/02/23
    Lab test 2
    Lab14
    Semester 2

    change 3 amounts to dollar/euro
    change euro to dollar
    change dollar to euro
    using an array, functions

*/

#include <stdio.h>

#define SIZE 3 // size of array 3 currency amounts

float change_to_Euro(float[]);   // converts US Dollars into Euro
float change_to_Dollar(float[]); // converts Euro into US Dollars

int main()
{

    int currency;       // options in menu
    float amount[SIZE]; // amount entered
    float change;       // changed currency
    char exit, end;     // case 3 to end program
    int i;

    // do while loop as i want it  to excecute at least once
    do
    {

        // menu option for currency
        printf("\n1.Euro\n2.Dollar\n3.Exit Program\n");
        scanf("%d", &currency);

        // error checking in case a char is entered
        if (getchar() != '\n')
        {
            currency = 0; // option in menu will be 0 and will go to default case
        }                 // end if

        switch (currency)
        {
        case 1:
        {
            // enter 3 amounts into floating-point array
            printf("please enter three amounts:\n");
            for (i = 0; i < SIZE; i++)
            {
                scanf("%f", &amount[i]);
            } // end for

            change = change_to_Euro(amount); // excecute function
            printf("\nAverage :%f", change); // display average of changed amount
            break;
        } // end case 1

        case 2:
        {
            // enter 3 amounts into floating-point array
            printf("please enter three amounts:\n");
            for (i = 0; i < SIZE; i++)
            {
                scanf("%f", &amount[i]);
            } // end for

            change = change_to_Dollar(amount); // excecute function
            printf("\nAverage: %f", change);   // display average of changed amount
            break;

        } // end case 2

        case 3:
        {
            printf("Are you sure you want to EXIT?\nYES = Y\nNO = N\n"); // MAKE SURE USER WANTS TO EXIT
            scanf("%s", &exit);

            switch (exit)
            {
            // case  user enters Y or y the program will end
            case ('Y'):
            {
                printf("Program has ended\n  THANK YOU!\n");
                end = exit;
                break;
            } // end case Y
            case ('y'):
            {
                printf("Program has ended\n  THANK YOU!\n");
                end = exit;
                break;
            } // end case y

            // case user enters n or N the program will continue
            case ('N'):
            {
                printf("Going back to the menu...\n");

                break;
            } // end case N
            case ('n'):
            {
                printf("Going back to the menu...\n");

                break;
            } // end case n

            // case user enters something other than no or yes program will continue
            default:
            {
                printf("\n ERROR\nPLEASE enter Y or N\n");
                break;
            } // end default

            } // end switch

            break;

        } // end case 3

        default:
        {
            printf("\nplease enter a number from the menu!\n");
            break;
        } // end default

        } // end switch

    } while (exit != end); // end do while

    return 0;
} // end main

float change_to_Euro(float my_array[]) // converts US Dollars into Euro
{

    float total = 0;     // total or sum of the amount in array
    float avg = 0;       // average of the total
    float convert[SIZE]; // array of converted amount
    int i = 0;

    for (i = 0; i < SIZE; i++)
    {

        // 1$ = 0.9 e
        printf("$%f\n", my_array[i]); // display dollar amount

        convert[i] = (my_array[i] * 0.9); // convert dollar to euro

        printf("€%f \n", convert[i]); // display changed amount

        total = total + convert[i]; // calculate sum
    }                               // end for
    avg = total / SIZE;             // calculate average

    return avg;

} // end euro

float change_to_Dollar(float my_array2[]) // converts Euro into US Dollars
{
    float total = 0;     // total or sum of the amount in array
    float avg = 0;       // average of the total
    float convert[SIZE]; // array of converted amount
    int i = 0;

    for (i = 0; i < SIZE; i++)
    {
        // 1 e  = 1,1 $
        printf("€%f\n", my_array2[i]); // display euro amount

        convert[i] = (my_array2[i] * 1.1); // convert euro to dollar
        printf("$%f \n", convert[i]);      // display changed amount

        total = total + convert[i]; // calculate sum
    }                               // end for
    avg = total / SIZE;             // calculate average

    return avg;

} // end dollar