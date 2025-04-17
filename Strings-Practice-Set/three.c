#include <stdio.h>
#include <string.h>

//Write your own version of strlen function from <string.h>

int length(char *str){
    
    char *ptr = str;
    int len = 0;
    while(ptr != '\0'){
        len++;
        ptr++;
    }
    return len;
}

int main() {
    

    char string[10] = "Naman"; 
    int c = length(string);
    printf("%d", c);

    return 0;
}