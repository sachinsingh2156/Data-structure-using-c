#include <stdio.h>
struct Student
{
    float p, c, m;
};

int main()
{
    int n, i;
    struct Student s1[100];
    printf("\n Enter the number of : ");
    scanf("%f", &n);
    for (i = 1; i < n; i++)
    {
        printf("\n Enter the marks of physics : ");
        scanf("%f", &s1[i].p);
    }

    return 0;
}
