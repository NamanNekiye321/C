#include <stdio.h>

void goodmorning();
void goodafternoon( int count);
void goodnight();


int main() {
    
    goodmorning();   
    goodnight();
    return 0;
}

void goodmorning(){
    printf("Good Morning\n");
    
}
void goodafternoon(int count ){
    printf("Good Afternoon\n");
    goodafternoon(count );
    
} 
void goodnight(){
    printf("Good Night\n");
    
}












































