#include <stdio.h>

int fibonacci(int n);

int main() {
    
    int num;

    printf("Enter fibonnaci terms \n");
    scanf("%d",&num);

    printf("The Fibonacci series is %d \n",fibonacci(num));

    return 0;
}

int fibonacci(int n){
    if(n == 1){
        return 0;
    }   
    else if (n == 2){
    return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}