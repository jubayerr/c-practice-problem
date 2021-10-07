#include <stdio.h>
// Author  : Jubayer
// Purpose : to print star in given format
int main()
{
    // variable declaration
    int n, i, j;
    // read data from user
    printf("Enter number of rows to be printed: ");
    scanf("%d", &n);
    printf("\n");
    // logic
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}