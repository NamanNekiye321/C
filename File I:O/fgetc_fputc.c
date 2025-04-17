#include <stdio.h>

int main() {
    //fgetc demo to read a file character by character
    FILE *ptr;

    // ptr = fopen("getcdemo.txt","r");
    // char c = fgetc(ptr);

    // printf("The value of my character is %c",c);

    ptr = fopen("putcdemo.txt","w");
    putc('c',ptr);
    putc(' ',ptr);
    putc('d',ptr);


    return 0;
}