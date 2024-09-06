/*
Iria Parada
7/3/23
read sentence from keyboard
a) calc num of chars
b)my sentence is:...

*/

#include <stdio.h>
#include <string.h>

#define SIZE 30

int main()
{

    char sentence[SIZE]={" "};
    char prefix[]={"MY SENTENCE IS: "};

    int length = 0;

    printf("please enter a sentence:\n");

    fgets(sentence, SIZE,stdin);

    length = strlen(sentence);

    printf("\nnumber of characters: %d" ,length);
    

    strcat(prefix,sentence);

    printf("\n%s", prefix);

    return 0;
}