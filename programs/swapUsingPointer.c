#include <stdio.h>

int main()
{
   int x, y, *a, *b, temp;

   /* Getting two numbers from user */
   printf("Enter the value of x : ");
   scanf("%d", &x);
   printf("Enter the value of y : ");
   scanf("%d", &y);

   /* Printing the numbers */

   printf("Before Swapping\nx = %d \ny = %d\n", x, y);

   /* Swaping the numbers */

   a = &x;
   b = &y;

   temp = *b;
   *b = *a;
   *a = temp;
   /* Printing the numbers after swap */

   printf("After Swapping\nx = %d\ny = %d\n", x, y);

   return 0;
}
