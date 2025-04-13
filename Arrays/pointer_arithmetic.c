#include <stdio.h>

int main() {
 
    float name = 0.7;
    float *real = &name;

    printf("The value of real is %u\n",real);
   
    real++;
    printf("The value of real is %u\n",real);
    

    return 0;
}