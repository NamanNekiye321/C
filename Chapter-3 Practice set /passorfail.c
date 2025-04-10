#include <stdio.h>

int main() {
    
    int totalMarks;
    int Maths;
    int Physics;
    int Chemistry;

    printf("Enter your total marks out of 300 and marks in each subject out of 100");
    scanf("%d %d %d %d",&totalMarks,&Maths,&Physics,&Chemistry);

    if(totalMarks < 120  || Maths<33 || Physics<33|| Chemistry<33){
        printf("You are Failed");
    }
    
    
    else{
        printf("You are pass");
    }




    return 0;
}