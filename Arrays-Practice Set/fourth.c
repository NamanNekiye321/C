#include <stdio.h>

int main() {
    
    int integers[10];   
    printf("Enter any integers");
    scanf("%d",integers);

    for(int i = 0;i<10;i++){
        printf("The value of %d element is %d\n",i +1,integers[i]);
    }
    return 0;
}