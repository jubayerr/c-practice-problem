#include <stdio.h>
#include <conio.h>

// Author : Jubayer
// Purpose : check prime number

int main()
{
    // variable declarion

    int input, i, count = 0;

    // input user

    printf("Enter any number: ");
    scanf("%d", &input);

    // logic

    for (i = 2; i < input; i++)
    {
        if (input % i == 0)
        {
            break;
        }
    }

    // print result

    if (i == input)
    {
        printf("%d is a prime number.", input);
    }
    else
    {
        printf("%d is not a prime number.", input);
    }

    return 0;
}