#include <stdio.h>

int main()
{
    int var1;
    int var2;

    var1 = 1;
    var2 = 2;

    printf("Initial values\n");
    printf("var1 is %d, var2 is %d\n", var1, var2);

    //Increment var1
    var1++;

    //Decrement var2
    var2--;

    printf("Final values\n");
    printf("var1 is %d, var2 is %d\n", var1, var2);

    return 0;

}