#include <stdio.h>

int main() {
    
    int num1,num2,num3,num4;

    printf("Enter the four numbers to know the largest of them:\n");
    scanf("%d %d %d %d",&num1, &num2,&num3,&num4);

    // if(num1 > num2 && num1 > num3 && num1 >num4){
    //     printf("%d is largest number",num1);
    // }
    // else if(num2 > num1 && num2 > num3 && num2 >num4) {
    //     printf("%d is largest number",num2);
    // }
    // else if(num3 > num1 && num3 > num2 && num3 >num4) {
    //     printf("%d is largest number",num3);
    // }
    // else if(num4 > num1 && num4 > num3 && num4 >num2) {
    //     printf("%d is largest number",num4);
    // }

    int largest = num1;

    if(num2 > largest){
        largest = num2;
    }
    if(num3> largest){
        largest = num3;
    }
    if(num4 > largest){
        largest = num4;
    }

    printf("The largest number out of 4 is %d\n",largest);




    return 0;
}