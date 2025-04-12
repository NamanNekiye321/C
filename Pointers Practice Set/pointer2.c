#include <stdio.h>

void address(int a);

int main()
{

    int a = 4;
    printf("The adress of a is %u\n", &a);

    address(a);

    return 0;
}

void address(int a)
{

    printf("The adress of a inside the function is %u\n", &a);
}