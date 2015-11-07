#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    //seed random number generator
    srand(time(NULL));
    
    // pick pseudorandom number in [0, 1023]
    int skittles = rand() % 1024;
    
    printf("Guess the number of skittles.\n");
    printf("It's between 0 and 1023.\n");
    printf("Whatchur guess: ");
    int user_guess = GetInt();
    
    // get guess from user
    while (skittles != user_guess) {
        if (user_guess < 0 || user_guess > 1024) {
            printf("Nope, you're outta range. Try again.\n");
        }
        if (user_guess < skittles) {
            printf("Too low. Try again.\n");
        }
        if (user_guess > skittles) {
            printf("Too high! Try again.\n");
        }
        user_guess = GetInt();
    }
    
    printf("You gots itz right!\n");
    printf("There was %i skittles.\n", skittles);
}