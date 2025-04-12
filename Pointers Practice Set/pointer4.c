#include <stdio.h>

void sumaverage(int *a, int *b, int *sum, int *average)
{

    *sum = *a + *b;
    *average = (*a + *b) / 2;
}

int main()
{

    int a, b;
    int sum;
    int average;

    printf("Enter value of a and b \n");
    scanf("%d %d", &a, &b);

    sumaverage(&a, &b, &sum, &average);

    printf("The sum of a and b is %d\n", sum);
    printf("The average of a and b is %d\n", average);

    return 0;
}