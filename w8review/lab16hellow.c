/*
Iria Parada
14/3/23

Write a C program that reads a string from standard input and uses separate
functions to do the following:

Compare the string to the following string: “Hello World”.
Determine the frequency of the word “is” (assuming there is at least one
occurrence).

*/

#include <stdio.h>
#include <string.h>

#define SIZE 20

void compare(char[]);

void is(char[]);


int main()
{

    char sentence[SIZE];
    
    int length = 0;

    printf("please enter a sentence:\n");

    // reads a sentence
    fgets(sentence, SIZE, stdin);

    

    // display a sentence entered
    printf("%s", sentence);

    compare(sentence);

    is(sentence);

}//end main   

void compare(char sentence[])
{
    char sen2[SIZE]= {"Hello World"};
    
    if (strncmp(sen2,sentence,strlen(sen2))==0)
    {
        printf("\nthey are equal\n");
    }
    else
    {
        printf("\nnot equal\n");
    }


}

void is(char sentence[])
{
    int frq = 0;
 // loop to go thru all letters of the sentence
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        //switch (sentence[i])
        // {
        // // case is
        // case 'i' && 's':
        //     frq++;
        //     break;

        // default:
        //     break;
        // }

        //or 

      
            if(sentence[i] == 'i' && sentence[i+1] == 's')
            {
                frq++;
            }
        
    }

    printf("\nfrquency of 'is' %d",frq );
}