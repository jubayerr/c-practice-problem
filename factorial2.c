#include <stdio.h>
#include <conio.h>

// Author : Jubayer
// Purpose: print factorial using function

// function declaration

int Factorial(int input);

int main()
{
    // variable declaration

    int firstNum, secondNum;

    // user input data

    printf("Enter first number: ");
    scanf("%d", &firstNum);

    printf("Enter second number: ");
    scanf("%d", &secondNum);

    // print result

    printf("Factorial of %d is %d", firstNum, Factorial(firstNum));

    printf("\nFactorial of %d is %d", secondNum, Factorial(secondNum));

    return 0;
}

// define function

int Factorial(int input)
{
    int fact = 1, i;
    for (i = 1; i <= input; i++)
    {
        fact *= i;
    }
    return fact;
}