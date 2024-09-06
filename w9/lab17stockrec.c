#include <stdio.h>
#include <string.h>

struct stock_record
{
    int no;
    char description[21];
    float price;
    int qty;
};

int main()
{
    struct stock_record stock_item= {
                                        4,
                                        "dsebvib",
                                        9.8,
                                        9
                                    };

    int i;
    int ptr;

    enter(&stock_item,ptr);
   



    return 0;
}

void enter(struct stock_record *ptr)
{
    printf("\nEnter no: ");
    scanf("%d", &ptr->no);

    printf("\nEnter price: ");
    scanf("%f", &ptr->price);

    printf("\nEnter qty : ");
    scanf("%d", &ptr->qty);

    
    printf("\nEnter description : ");
    fgets(ptr->description, 21, stdin);

} // end enter
