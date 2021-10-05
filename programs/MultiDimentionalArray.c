#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    
    int m,n, i, j;
    int a[10][10];
    printf("\n***************Output****************\n");
    printf("Enter the size of the multi-dimentional array : \n");
    scanf("%d%d",&m, &n);
    printf("Enter the elements into the array : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
        printf("The entered Multi-dimentional array is : \n\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ", a[i][j]);
            }
        printf("\n");
        }
    return 0;
}




