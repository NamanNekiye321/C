#include <stdio.h>
#include <string.h>

int main() {
    
    char *source = "Naman";
    char target[30];
    strcpy(target,source);

    printf("%s\n", target);

    return 0;
}