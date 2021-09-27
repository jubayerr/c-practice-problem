#include <stdio.h>
#include <conio.h>

// Author : Jubayer
// Purpose: print factorial using recursion

// function declaration

int Factorial(int input);

int main()
{
    // variable declaration

    int n;

    // user input data

    printf("Enter any number: ");
    scanf("%d", &n);

    // print result

    printf("Factorial of %d is %d", n, Factorial(n));

    return 0;
}

// define function

int Factorial(int input)
{
    if (input == 0)
        return 1;
    else
        return input * Factorial(input - 1);
}