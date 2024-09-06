#include <stdio.h>
int main()
{
        /*question 1 lab4 say if character is vowel or not using switch statement
        Author: Iria Parada Murciego
        Date: 25/10/22  */
    char vowel=' ';
 
    printf("Enter  a charachter: %c\n");
    scanf("%c",&vowel);

    switch (vowel)
    {
    
        case 'a':
        {
            printf("\n %c is a vowel",vowel);
            
            break;
        } //end of case a 
          case 'A':
        {
            printf("\n %c is a vowel",vowel);
            
            break;
        } //end of case a 

       case 'E':
        {
            printf("\n %c is a vowel",vowel);
            
            break;
        } //end of case e
        case 'e':
        {
            printf("\n %c is a vowel",vowel);
            
            break;
        } //end of case e

        case 'o':
        {
            printf("\n %c is a vowel",vowel);
            
            break;
        } //end of case o
        case 'O':
        {
            printf("\n %c is a vowel",vowel);
            
            break;
        } //end of case o


        case 'i':
        {
            printf("\n %c is a vowel",vowel);
            
            break;
        } //end of case i 
         case 'I':
        {
            printf("\n %c is a vowel",vowel);
            
            break;
        } //end of case i 

        case 'U':
        {
            printf("\n %c is a vowel",vowel);
            
            break;
        } //end of case u
        case 'u':
        {
            printf("\n %c is a vowel",vowel);
            
            break;
        } //end of case u

        default:
        {
            printf("\n %c is NOT a vowel \n",vowel);
            break;
        }//end default 
    }//end switch

    return 0;
}// end main