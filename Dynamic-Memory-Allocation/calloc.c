#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *ptr;

    ptr = (int*)calloc(30,sizeof(int));

    for(int i = 0;i<29;i++){
        printf("the value of %d element is : %d\n",i+1,ptr[i]);
    }

    return 0;
}