#include <stdio.h>

int main() {
    

    FILE *fptr;

    fptr = fopen("naman.txt","w");
    int num = 23;

    fprintf(fptr,"%d\n",num);
    fprintf(fptr,"%s","thanks for using fprintf");

    fgetc(fptr);


    return 0;
}