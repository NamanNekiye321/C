#include <stdio.h>

int main()
{

    int radius = 0;

    printf("Enter radius of circle : \n");
    scanf("%d", &radius);

    float area = 3.14 * radius * radius;

    printf("The area of circle is : %f\n", area);

    return 0;
}