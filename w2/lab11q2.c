// Iria Parada Murciego 31/1/2023
// lab11 semester2 week2    Q2
//display  chosen number of stars 


# include <stdio.h>

void stars(char,int);

int main()
{
   
    int no_stars = 0;
    char my_stars;

    //num of stars
    printf("how many stars to display?\n\n");
    scanf("%d",&no_stars);


    while (getchar() != '\n');

    //chose stars
    printf("which char to display?\n");
    scanf("%c",&my_stars);

    
    //execute function stars
    stars(my_stars,no_stars);

    return 0;
}//end main

void stars (char ch,int num)
{
    int i;

    //display num of stars
    for ( i = 0; i < num; i++)
    {
        printf("%c",ch);
    }//end for
    
}//end stars