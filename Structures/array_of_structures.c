#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];

};

int main() {
    
    struct employee facebook[100];
    facebook[0].code = 34;
    facebook[1].code = 54;

    printf("%d\n",facebook[0].code);


    return 0;
}