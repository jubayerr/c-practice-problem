#include <stdio.h>
#include <conio.h>

// Author: Jubayer
// Purpose: to prints factorial of given number

int main()
{
    // variable declaration
    int input, i, fact = 1;

    // read data from user
    printf("Enter a number: ");
    scanf("%d", &input);

    // logic

    for (i = 1; i <= input; i++)
    {
        fact *= i;
    }

    // print result
    printf("Factorial of %d is %d\n", input, fact);

    return 0;
}