#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Author : Jubayer
// Purpose : prime number in a given range

// check prime function

bool isPrime(int num)
{
    int sqroot = (int)sqrt((double)num);

    for (int i = 2; i <= sqroot; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

// define prime generator function

void generatePrimes(int num)
{
    // prints prime numbers
    printf("\nGenerate primes until: %d\n\n", num);

    // variable
    int count = 0;

    // logic
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            count++;
            printf("%4d : %6d\n", count, i);
        }
    }

    // print result
    printf("\nTotal primes found until %d is %d\n ", num, count);
}

int main()
{
    // variable
    int userInp;

    // user input
    printf("\nGet Prime number upto you want: ");
    scanf("%d", &userInp);

    // calling prime generator function
    generatePrimes(userInp);

    return 0;
}