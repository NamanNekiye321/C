#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0)); // Ensures a different random number each time the program runs
    int random = rand() % 100 + 1; // Generate a random number between 1 and 100

    int guess_num;
    int attempts = 0; // Counter to track the number of guesses

    printf("Guess the number (between 1 and 100):\n");

    // Loop until the user guesses the correct number
    do {
        scanf("%d", &guess_num);
        attempts++; // Increment the counter for each guess

        if (guess_num < random) {
            printf("Higher Number Please\n");
        } else if (guess_num > random) {
            printf("Lower Number Please\n");
        } else {
            printf("Yes, you got it in %d attempts!\n", attempts);
        }
    } while (guess_num != random);

    return 0;
}