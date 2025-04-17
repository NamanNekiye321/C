#include <stdio.h>

int main() {
    

    char s1[20];
    char s2[20];
    char c;
    int i = 0;
    
    printf("Enter the value of first string\n");
    scanf("%s",s1);

    printf("Enter the value of second string characte by character");

    while(c!= '\n'){

        fflush(stdin);
        scanf("%c",&c);
        s2[i] = c;
        i++;
    }

    s2[i-1] = '\0';
    printf("The value of s1 is %s",s1);
    printf("The value of s2 is %s",s2);


    return 0;
}