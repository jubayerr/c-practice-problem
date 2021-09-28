#include <stdio.h>
#include <conio.h>

// Author : Jubayer
// Purpose : to print factors number

int main()
{
    // variable declaration
    int input, i;

    // user input
    printf("Enter any number: ");
    scanf("%d", &input);

    // logic
    for (i = 1; i <= input; i++)
    {
        if (input % i == 0)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}