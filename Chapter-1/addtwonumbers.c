#include <stdio.h>

int main()
{

    int first = 0;
    int second = 0;
    printf("Enter First Number:\n");
    scanf("%d", &first);

    printf("Enter Second Number:\n");
    scanf("%d", &second);
    int addition = first + second;
    int subtracion = first - second;
    int division = first / second;
    int remainder = first % second;

   

    printf("Addition:%d\n", addition);
    printf("Subtraction:%d\n", subtracion);
    printf("division:%d\n", division);
    printf("remainer:%d\n", remainder);

    return 0;
}