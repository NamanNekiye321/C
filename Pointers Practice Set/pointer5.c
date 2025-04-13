#include <stdio.h>

int main() {
    
    int a = 4;
    int *b = &a;
    int **c = &b;

    printf("The value of a is %u\n", **c);
 
    return 0; 
}
