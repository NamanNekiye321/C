#include <stdio.h>

int main() {
    
    FILE *ptr;
    
    int num1;
    int num2;
    int num3;

    ptr = fopen("threeintegers.txt","r");

    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);

    printf("%d %d %d\n",num1,num2,num3);


    return 0;
}