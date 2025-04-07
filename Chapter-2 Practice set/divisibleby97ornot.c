#include <stdio.h>

int main() {
    
    int number =0;

    printf("Enter a number to check whether its divisible by 97 or not :\n");
    scanf("%d",&number);

    if(number%97 == 0){
        printf("The number is divisible by 97\n");

    }
    else{
        printf("The number is not divisible by 97\n");
    }







    return 0;
}