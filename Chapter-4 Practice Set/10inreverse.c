// write a program to print the multiplication table of 10 in reverse order.
#include <stdio.h>

int main()
{
    int i;
    int n=10;

    for (i = 10; i; i--)
    {
        printf("%d\n",n*i);
    }

    return 0;
}
