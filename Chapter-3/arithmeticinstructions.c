#include <stdio.h>
#include <math.h>




int main() {

    int a =4;
    int b = 8;
    int z ;
    z = a*b; //legal
    // a*b = z ; //illegal

    printf("The value of a+b is : %d\n",a+b);
    printf("The value of a-b is : %d\n",a-b);
    printf("The value of a*b is : %d\n",a*b);
    printf("The value of a/b is : %d\n",a/b);


//no operator assumed to be present in c language

//There is no operator to perform exponentiation in c

printf("the value of 4 to the power of 5 is %f\n",pow(4,5));

    return 0;
}