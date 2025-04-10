#include <stdio.h>

int main() {
    
    char input;

    printf("Enter any lowercase or uppercase\n");
    scanf("%c",&input);

    if(input >=97 && input <= 122 ){
        printf("Its a lowercase character\n");
    }
    else{
        printf("Its a not a lowercase character\n");
    }




    return 0;
}