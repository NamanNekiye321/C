#include <stdio.h>

int main() {
    
    int i;
    int n = 8;
    int sum= 0;

    for(i=1;i<=10;i++){
       
        sum += n*i;

    }

    printf("%d\n",sum);



    return 0;
}