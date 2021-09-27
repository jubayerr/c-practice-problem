#include <stdio.h>
#include <conio.h>

// Author : Jubayer
// Purpose : to print a sum of n number upto n

int main()
{
    // variable declaration

    int input, i, sum = 0;

    // read user input

    printf("Enter a number: ");
    scanf("%d", &input);

    // logic

    for (i = 1; i <= input; i++)
    {
        sum += i;
    }

    // print result

    printf("Sum of %d natural numbers is : %d", input, sum);

    return 0;
}