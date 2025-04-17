#include <stdio.h>

int main() {
    
    int array[] = {1,2,3,4,5,6,7,8,9,10};

    int *ptr = array;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);

    return 0;
}