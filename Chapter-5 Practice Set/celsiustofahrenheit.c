#include <stdio.h>

float fahrenheit(int celsius);

int main()
{

    int temp;

    printf("Enter degree in celsius to convert in fahrenehit:\n");
    scanf("%d", &temp);

    printf("The degree in fahrenehit will be : %f\n", fahrenheit(temp));

    return 0;
}

float fahrenheit(int celsius)
{

    return (celsius * 9.0 / 5.0) + 32;
}