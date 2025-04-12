#include <stdio.h>

void tentimes(int *a);


int main() {
    
    int a =4;
    printf("The value of a before function call :%d \n", a);
   
   tentimes(&a);

    printf("The value of a after function call :%d \n",a);

    return 0;
}

void tentimes(int *a){

    int b = *a *10;
    *a = b;
   
}