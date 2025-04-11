#include <stdio.h>

float average(int a, int b , int c);

int main() {
 
    float averageofthree;

    averageofthree = average(1,2,3);
    printf("%.3f\n",averageofthree);
    
    return 0;
}

float average(int a, int b , int c){

    float doAverage;

    return doAverage = (a + b + c)/3.0;

}