#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int*ptr;

    ptr = (int*)calloc(10,sizeof(int));

    free(ptr);

    ptr = realloc(ptr,10*sizeof(int));



    return 0;
}