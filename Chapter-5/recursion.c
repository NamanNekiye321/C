#include <stdio.h>

int factorial(int x);

int main() {
    

    int c;
    c= factorial(4);

    printf("The Factorial is %d\n",c);
    return 0;
}

int factorial(int x){

    if(x==0 || x==1){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
 
}