#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n;
    // Allocating memory using malloc.
    printf("Enter the size of array : ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Memory successfully allocated using malloc.\n");
    // Taling the input of array from user.
    printf("Enter the element of array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    // Printing the stored array.
    printf("\nThe array stored is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", p[i]);
    }
    free(p);
    return 0;
}
