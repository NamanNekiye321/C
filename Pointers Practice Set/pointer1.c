#include <stdio.h>

int main() {
 
    int a = 4;
    int *b = &a;

    printf("The adress of a is %u\n",b);
    printf("The value of a is %d\n",*b);




    return 0;
}