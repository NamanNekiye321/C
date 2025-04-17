#include <stdio.h>
#include <string.h>

int main() {
    
    char s1[11] = "Hello";
    char s2[] =  "Naman";
    strcat(s1,s2);

    printf("%s",s1);

    return 0;
}


