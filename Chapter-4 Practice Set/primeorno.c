#include <stdio.h>

int main() {
    
    //Write a program to check whether a given nuumber is prime or not using loops.



    int n=2, prime = 1;

    for(int i = 2;i<n;i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }

    if(prime ==0){
        printf("This is a composite number\n");
    }
    else{
        printf("This is a prime number\n");
    }

    




    return 0;
}