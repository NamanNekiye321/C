#include <stdio.h>

int main() {
    
    int income;

    printf("Enter your income to know income tax to be paid by you");
    scanf("%d",&income);

    

    if(income >= 250000 && income <= 500000){
        printf("Income tax to be paid by you : %d \n",(income*5)/100);
    }
    else if(income > 500000 && income <= 1000000){
        printf("Income tax to be paid by you: %d \n",(income*20)/100);
    }
    else if(income > 1000000){
        printf("Income tax to be paid by you: %d \n",(income*30)/100);
    }





    return 0;
}