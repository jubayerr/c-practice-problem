#include <stdio.h>
#include <conio.h>

// Author : Jubayer
// Purpose : to print a power b value

int main()
{
    // variable declaration
    int a, b, result = 1, i;

    // user input

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // logic
    for (i = 1; i <= b; i++)
    {
        result *= a;
    }

    // print result

    printf("%d power %d = %d", a, b, result);

    return 0;
}