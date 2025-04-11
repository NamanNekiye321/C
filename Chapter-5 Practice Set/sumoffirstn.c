#include <stdio.h>

int sum(int n);

int main() {
    
    int num;

    printf("Enter no of terms to be added \n");
    scanf("%d",&num);

    printf("The sum of first %d natural number is  %d \n",num,sum(num));

    return 0;
}

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
    
    
}