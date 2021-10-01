#include <stdio.h>

// Author: Jubayer
// Purpose : reverse of given number

int main()
{
    // variable declartion
    int n, rev = 0, rem, m;

    // user input data
    printf("\nEnter any number: ");
    scanf("%d", &n);

    // logic
    m = n;

    while (m > 0)
    {
        rem = m % 10;
        m = m / 10;
        rev = rev * 10 + rem;
    }

    // output
    printf("\nReverse of %d is %d", n, rev);

    return 0;
}