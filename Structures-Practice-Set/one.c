#include <stdio.h>
#include <string.h>

typedef struct  vector { 
    int x;
    int y;
}sum;

int sumvector(sum v1 , sum v2){

    return v1.x+v2.y;
}

int main() {
   sum v1,v2;
    v1.x = 54;
    v2.y = 35;

   int a =  sumvector(v1,v2);

   printf("%d",a);
    // printf("x:%d y:%d",v1.x,v2.y );
    return 0;
}