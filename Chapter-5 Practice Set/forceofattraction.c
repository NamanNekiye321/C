#include <stdio.h>

float force(int mass);

int main() {
    
    int mass;

    printf("Enter the mass of body:\n");
    scanf("%d",&mass);

    printf("The force of attraction exterted by earth is %f\n", force(mass));

    return 0;
}

float force(int mass){

    return mass*9.8;
}



