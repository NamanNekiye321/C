#include <stdio.h>

int main()
{
    //using do-while loop
    int i = 1, sum = 0, n = 10;

    do{
        sum += i;
        i++;

    }
    while(i <= n);
    printf("%d\n", sum);














    //using for loop

    // int i, sum = 0, n = 10;

    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }
    // printf("%d\n", sum);

    return 0;
}