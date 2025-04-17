#include <stdio.h>

int main() {
    
    FILE *ptr;

    char name[10];
    char name2[10];
    char name3[10];
    char name4[10];
    char name5[10];
    ptr = fopen("sample.txt","r");
    // ptr = fopen("sample.txt","w");
    fscanf(ptr,"%s",&name);
    fscanf(ptr,"%s",&name2);
    fscanf(ptr,"%s",&name3);
    fscanf(ptr,"%s",&name4);
    fscanf(ptr,"%s",&name5);

    printf("The text inside name.txt is :-> %s\n",name);
    printf("The text inside name.txt is :-> %s\n",name2);
    printf("The text inside name.txt is :-> %s\n",name3);
    printf("The text inside name.txt is :-> %s\n",name4);
    printf("The text inside name.txt is :-> %s\n",name5);

    fclose(ptr);

    return 0;
}