#include <stdio.h>

int main()
{

    int age;

    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("you cannot drive\n");
    }

    return 0;
}