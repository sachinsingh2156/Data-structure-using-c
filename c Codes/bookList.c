#include <stdio.h>
#include <string.h>
union book
{
    int a;
    char name[10];
    float price;
};

int main()
{
    union book b1;
    printf("\nEnter the book id : ");
    scanf("%d", &b1.a);
    printf("\nThe book id is %d", b1.a);
    printf("\nEnter name of book : ");
    scanf("%s", &b1.name);
    printf("\nThe name of the book is %s", b1.name);
    printf("\nEnter the price of book : ");
    scanf("%f", &b1.price);
    printf("\nThe price of the book is %f.\n", b1.price);
    return 0;
}
