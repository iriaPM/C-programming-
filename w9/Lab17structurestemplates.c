/*
Iria Parada Murciego
21/3/23
write a structure templage for each of the following:

a) playing card, five of diamonds

b) stock record consisting of stock number, stock description, and quantity

c) ...

!!** e/f DO NO WORK PROPERLY**!!

*/

#include <stdio.h>
#include <string.h>

#define SIZE 20

// a)
struct playing_card
{
    int number;
    char typecard[SIZE];
};

// b)
struct stock_rec
{
    int stcnum;
    char descp[SIZE];
    int quantity;
};

// c
struct library_book
{
    char Isbn[13];
    char bookTitle[30];
    char Author[25];
    float Price;
};

// d
struct customer_rec
{
    int number;
    char name[SIZE];
    char adress[45];
    double balance;
};

// e
struct transaction_rec
{
    char type[1];
    int date[3];
    float amount;
};

// f)
struct time_of_day
{
    int hours[SIZE];
    int min[SIZE];
    int sec[SIZE];
};

// g)
struct coordinates
{
    int degrees;
    int minutes;
    char direction[4];
};

//h)
struct league
{
    char nameteam;
    int win;
    int loss;
    int draws;
};

void display(struct customer_rec);

void display2(struct transaction_rec);
void enter(struct transaction_rec *);

int main()
{
    struct playing_card card1, card2;
    struct stock_rec stocks;

    struct library_book book = {"3214567a",
                                "the title of the book",
                                "the author ", 25};

    /*__________________________________________________________*/
    // a)
    // playing card
    card1.number = 5;
    strcpy(card1.typecard, "Diamonds");

    card2.number = 3;
    strcpy(card2.typecard, "Hearts");

    // displaying cards
    printf("\nThe structure of the card contains:\n");
    printf("card 1: %d of %s", card1.number, card1.typecard);
    printf("\ncard 2: %d of %s\n", card2.number, card2.typecard);
    /*__________________________________________________________*/

    /*__________________________________________________________*/
    // b)
    stocks.stcnum = 65;
    strcpy(stocks.descp, "description chars ");
    stocks.quantity = 4000;

    // displaying stocks
    printf("\nThe structure of the stocks contains:\n");
    printf("stock number: %d ", stocks.stcnum);
    printf("\nstock quantity: %d ", stocks.quantity);
    printf("\nstock description: %s\n ", stocks.descp);
    /*__________________________________________________________*/

    /*__________________________________________________________*/
    // c)
    struct library_book *ptr;

    ptr = &book;

    printf("\nLibrary book:\n");
    printf("ISBN: %s", book.Isbn);
    // printf("ISBN:%s",(*ptr).Isbn);
    // printf("ISBN:%s", ptr -> Isbn);
    printf("Title: %s\n", book.bookTitle);
    printf("Author: %s\n", book.Author);
    printf("Price: %f\n", book.Price);
    /*__________________________________________________________*/

    /*__________________________________________________________*/
    // d)

    struct customer_rec record = {123456,
                                  "Iria Parada",
                                  "24, glenbawn, KK",
                                  238745846};
    display(record);
    /*__________________________________________________________*/
    // e)

    struct transaction_rec transaction;

    enter(&transaction);
    display2(transaction);
    /*__________________________________________________________*/
   


    // for (int i = 0; i < 12; i++)
    // {
    //     times.hours++;
    //     for (int j = 0; j < 59; j++)
    //     {
    //         times.min++;
    //         for (int z = 0; z < 59; z++)
    //         {
    //            times.sec++;
    //         }
            
    //     }
    //   printf("%d:%d:%d",times.hours,times.min,times.sec);  
    // }
    /*__________________________________________________________*/

  struct  league leaguerec =    {
                                    "tudublin",
                                    4,
                                    3,
                                    1
                                };
    printf("\n\nname of team: %s",leaguerec.nameteam);
    printf("\n\nname of wins: %d",leaguerec.win);
    printf("\n\nname of team: %s",leaguerec.loss);
    printf("\n\nname of team: %s",leaguerec.draws);


    
    return 0;
} // end main

void display(struct customer_rec stu)
{
    int i;

    printf("\nCustome records:\n");
    printf("number: %u\n", stu.number);
    printf("name: %s\n", stu.name);
    printf("adress: %s\n", stu.adress);
    printf("balance: %lf\n", stu.balance);

} // end display

void enter(struct transaction_rec *ptr)
{
    int i;

    printf("\nEnter samount: ");
    scanf("%d", &ptr->amount);

    printf("\nEnter date: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ptr->date[i]);
    } // end for

    // while (getchar() != '\n');
    printf("\nEnter transaction type: ");
    fgets(ptr->type, 1, stdin);

} // end enter

void display2(struct transaction_rec stu)
{

    printf("\nCustomer records:\n");
    printf("type: %c\n", stu.type);
    printf("date: ");

    for (int i = 0; i < 3; i++)
    {
        printf("%d/", stu.date[i]);

    } // end for

    printf("\namount: %d\n", stu.amount);

} // end display2
