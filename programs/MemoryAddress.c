#include <stdio.h>

int main()
{
    int a = 1;
    char b = 'S';
    float c = 3.14;
    
    /* Storing the addres using pointers */

    int *x = &a;
    char *y = &b;
    float *Z = &c;

    /* Printing the address */

    printf("The address of a is %d. \n", x);
    printf("The address of b is %d. \n", y);
    printf("The address of c is %d. \n", Z);

    return 0;
}
