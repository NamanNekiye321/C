#include <stdio.h>

int main() {
    
    int n;
    int i ;
    int factorial = 1;

    printf("Enter a number to know its factorial:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        factorial *= i;
    }
    printf("%d\n",factorial);


    return 0;
}