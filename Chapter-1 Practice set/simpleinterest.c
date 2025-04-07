#include <stdio.h>

int main() {

    int principal  =   5;
    int years =    5;
    int rateofinterest =    5;

    float simpleinterest = (principal*years
    *rateofinterest)/100;

    printf("The simple interest for given set of values is :%.2f\n",simpleinterest);



    return 0;
}




