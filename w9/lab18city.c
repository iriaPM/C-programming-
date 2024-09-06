/*
 city name
 population
 annual rainfall(mm)
 annual sunshine (hours)

*/
#include <stdio.h>
#include <string.h>

#define SIZE 3
#define LENGTH 21

struct city_rec
{
    char city_name[SIZE];
    int population;
    int rainfall;
    int sunshine;
};

int main()
{
    int i;
    struct city_rec city[SIZE];
    struct city_rec *ptr;
    ptr = & city;
    int highest_rainfall;
    int lower_sunshine;


    // enter data i)
  
    for (i = 0; i < SIZE; i++)
    {
        printf("Please enter the population number of your city:\n");
        scanf("%d", &city[i].population);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("Please enter the rainfall number of your city:\n");
        scanf("%d", &city[i].rainfall);
        if (city[i].rainfall > highest_rainfall)
        {
            highest_rainfall = city[i].rainfall;
        }
        
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("Please enter the sunshine number of your city:\n");
        scanf("%d", &city[i].sunshine);
        if (city[i].sunshine < lower_sunshine)
        {
            lower_sunshine = city[i].sunshine;
        }
        
    }

     while(getchar() !='\n');

    // enter data
    for (i = 0; i < SIZE; i++)
    {
        printf("Please enter the name of your city: \n");
        fgets(city[i].city_name, LENGTH, stdin);
    }

    // display data using pointer var of 1st city
    printf("\nThe city name is: %s", ptr->city_name);
    printf("\nThe population  is: %d", ptr->population);
    printf("\nThe rainfall  is: %d", ptr->rainfall);
    printf("\nThe sunshine  is: %d", ptr->sunshine);
    printf("\nHighest num of rainfall is:%d",highest_rainfall);
    printf("\nLowest hours of sunshine: %d",lower_sunshine);

    return 0;

} // end main