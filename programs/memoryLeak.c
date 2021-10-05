#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableOf, i = 1;
    int *p;
    tableOf = 6;

    while (i < 34500)
    {
        printf("%d * %d = %d\n", tableOf, i, i * tableOf);
        p = malloc(2444 * sizeof(int));
        if (i % 10 == 0)
        {
            getchar();
        }
        i++;
    // free(p); Without this memory leak occur.
    }

    return 0;
}
