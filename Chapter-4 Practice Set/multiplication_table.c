#include <stdio.h>

int main() {
    
    int i;
    int n;

    printf("Get multiplication table of any number :\n");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i, n*i);
    }

    return 0;
}