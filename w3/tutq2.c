/*lab12 q4 -- tutorial week3*/

/*  DOES NOT WORK!!   :'(  */

#include <stdio.h> 

char commonChar(char,char,char);

int main(void)
{

    char c1,c2,c3;
    char common;
    
    printf("enter any three charatcers\n");

    while (getchar()!='\n');

    scanf("%c",&c1);

    while (getchar()!='\n');

    scanf("%c",&c2);

    while (getchar()!='\n');

    scanf("%c",&c3);

    common = commonChar(c1,c2,c3);

    printf("\nthe common char is %c", common);


    return 0;
}

char commonChar(char ch1, char ch2, char ch3)
{
    if(ch1 == ch2 || ch1 == ch3)
    {
        return ch1;
    }
    else if (ch2 == ch3 || ch2 == ch1)
    {
        return ch2;
    }
    else 
    {
        return ch3;
    }
}//end coomonchar