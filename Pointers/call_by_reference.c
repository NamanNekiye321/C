#include <stdio.h>

void swap(int *x, int *y);


int main() {
    
    int x = 3,y= 4;

    printf("Value of x and y before function call is %d and %d\n", x,y);
    swap(&x,&y);
    printf("Value of x and y before function call is %d and %d\n", x,y);

    printf("%d\n",x);
    
    return 0;
}
void swap(int *x, int *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}










