#include <stdio.h>

//Write a program containing a function which reverses the array passed to it

void reverse(int *arr,int n){
            

}
int main() {
    
    int arr[5] = {3,4,5,2,4};
    printf("%d\n",*arr);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);


    reverse(arr,5);

    printf("%d\n",*arr);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);





    return 0;
}