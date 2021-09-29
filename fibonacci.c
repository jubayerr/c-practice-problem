#include <stdio.h>
#include <conio.h>
// Author : Jubayer
// Purpose : fibonacci series of given number

int main()
{
    // variable
    int n, i, a = 0, b = 1, c;

    // read n value from user
    printf("Enter any number to get fibonacci series: ");
    scanf("%d", &n);

    // logic
    printf("Fibonacci Series: 0 1");

    for (i = 1; i <= n - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d", c);
    }

    return 0;
}