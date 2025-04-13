#include <stdio.h>

int main() {
    

    int marks[4];

    printf("Enter marks of student1:");
    scanf("%d",&marks[0]);
    printf("Enter marks of student2:");
    scanf("%d",&marks[1]);
    printf("Enter marks of student3:");
    scanf("%d",&marks[2]);
    printf("Enter marks of student4:");
    scanf("%d",&marks[3]);

    printf("You have entered %d %d %d and %d", marks[0], marks[1], marks[2], marks[3]);




    return 0;
}