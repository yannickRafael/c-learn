#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, tries = 0;

    srand(time(NULL));

    secret = 1 + rand() % 100;

    printf("I'm thinking of a number between 1 and 100.\n");

    
    do {
        printf("Take a guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess < secret) {
            printf("Too low!\n");
        } else if (guess > secret) {
            printf("Too high!\n");
        } else {
            printf("Correct! You guessed it in %d tries.\n", tries);
        }

    } while (guess != secret);

    return 0;
}
