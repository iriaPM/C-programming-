/*
Iria Parada Murciego

14/3/23

Write a C program that reads a string from standard input and uses separate
functions to do the following:

Count the number of times a vowel occurs in the sentence.

Find the number of characters in the string you entered (use a string function).
Using this number, display the string in reverse.

Concatenate the string you entered to the end of the following string and display
the new string:
char sentence[40] = “I entered the string"

*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

void vowel(int, char[]);
void reverse(int, char[]);

void prefix(char[]);

int main()
{

    char sentence[SIZE] = {0};
    char sentence2[SIZE] = {0};
    int numvowel = 0;
    int length = 0;

    printf("please enter a sentence:\n");

    // reads a sentence
    fgets(sentence, SIZE, stdin);

    // display a sentence entered
    printf("\n%s", sentence);

    // copy sentence into sentence2 as sentence will be reversed
    strcpy(sentence2, sentence);

    vowel(numvowel, sentence);

    reverse(length, sentence);

    prefix(sentence2);

    return 0;
} // end main

void vowel(int vowelnum, char sentence[])
{

    // loop to go thru all letters of the sentence
    for (int i = 0; i < SIZE; i++)
    {
        switch (sentence[i])
        {
        // case the letters are vowels
        case 'a':
        case 'A':
        case 'E':
        case 'e':
        case 'o':
        case 'O':
        case 'U':
        case 'u':
        case 'I':
        case 'i':
            vowelnum++;
            break;

        default:
            break;
        }
    }

    printf("\nnumber of vowels: %d", vowelnum);

} // end vowel funct

void reverse(int length, char sentence[])
{

    // know the length of the sentnce
    length = strlen(sentence);

    printf("\nnumber of characters: %d\n", length);

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", sentence[i]);
    }
}

void prefix(char sentence[])
{
    char prefix[40] = {"string i entered: "};

    strcat(prefix, sentence);
    printf("\n%s", prefix);
}