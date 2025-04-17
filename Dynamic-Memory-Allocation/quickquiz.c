#include <stdio.h>
#include <stdlib.h>

//Write a program to create an array of size n using calloc where n is an integer entered by the user

int main() {
    

    int num;
    int *ptr;

    printf("Enter a integer : \n");
    scanf("%d",&num);

    ptr = (int*)calloc(num,sizeof(int));

    for(int i =0;i<num;i++){
        printf("The value of %d element is: %d\n",i+1,ptr[i]);
    }
   

    return 0;
}