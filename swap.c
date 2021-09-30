#include <stdio.h>
#include <conio.h>

// Author : Jubayer
// Purpose : swap data between two variable

int main()
{
    int a = 5, b = 8, t;

    printf("\n\nBefore swap: \n");
    printf("a=%d, b=%d\n\n", a, b);

    t = a;
    a = b;
    b = t;

    printf("After swap: \n");
    printf("a=%d, b=%d\n\n", a, b);

    return 0;
}