#include <stdio.h>

int main()
{

    int i;
    int *j = &i;

    printf("The address of i is %u\n", i);
    printf("The address of j is %p\n", j);

    return 0;
}