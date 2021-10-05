#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p;
    int i = 1;
    n = 5;
    // printf("%d", p);
    while (i <= 10)
    {
        p = (int *)malloc(n * sizeof(int));
        printf("%d * %d = %d\n", *p, i, ((*p) * i));
        i++;
    }

    return 0;
}
