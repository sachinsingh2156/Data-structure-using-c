#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, c = 0, t = 0;;
    int a[n], prime[t];
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the elements in the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Provided set of number = { ");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("}");
    
    printf("\nPrime Numbers in Above Array = { ");
    for (int i = 0; i < n; i++) {
      int j = 2, p = 1;
       while (j < a[i]) {
           if (a[i] % j == 0) {
               p = 0;
               break;
           }
           j++;
       }
       if (p == 1) {
           printf("%d ", a[i]);
       }
   }

    printf("}");

    return 0;
}
