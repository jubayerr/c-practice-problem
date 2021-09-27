#include <stdio.h>
#include <conio.h>

// Author : Jubayer
// Perpose : to print a multiplication table

int main()
{
    // variable declaration
    int input, i;
    // read the data from user
    printf("Enter any number: ");
    scanf("%d", &input);

    // logic
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", input, i, input * i);
    }
    return 0;
}