#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

// Author : Jubayer
// Purpose : check prime number [using function]

// declare function [check prime]

bool isPrimeNumber(int input);

int main()
{
    // variable declarion

    int input, i;

    // input user

    printf("Enter any number: ");
    scanf("%d", &input);

    // print result

    if (isPrimeNumber(input))
    {
        printf("%d is a prime number", input);
    }
    else
    {
        printf("%d is not a prime number", input);
    }

    return 0;
}

// define function [check prime]

bool isPrimeNumber(int input)
{
    int i;

    for (i = 2; i < input; i++)
    {
        if (input % i == 0)
        {
            break;
        }
    }

    if (i == input)
    {
        return true;
    }
    else
    {
        return false;
    }
}