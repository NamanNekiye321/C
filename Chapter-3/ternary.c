#include <stdio.h>

int main() {
    
    int num ;

    printf("Enter the number\n");
    scanf("%d",&num);

    //one liner
    (num == 2 || num == 4) ? printf("Your number is 2 or 4\n") : printf("No idea\n");





    return 0;
}