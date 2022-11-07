/*
 Start: Ask for the game they wish to play
 Game 1: generates a random number between 0,100 and after every guess it tells them if its high or low.
 Game 2: asks for the number and the users. the computer generates guesses
 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define max 100
#define min 0

void gameTwo(int num, int numplayers);
void gameOne(int num);
    

int main(int argc, const char * argv[]) {
    int numPlayer;
    srand((int)time(NULL));
    int r = (rand()%101);
    printf("Please Enter The Number Of Players: ");
    scanf("%i", &numPlayer);
    
    if (numPlayer == 1) {
        gameOne(r);
    } else {
        gameTwo(r,numPlayer);
    }
}


void gameOne(int num){
    int guess;
    int numGuess = 5;
    _Bool guessRight = 0;
    
    while (!guessRight && numGuess>0){
        printf("Please Enter A Guess Between 0 and 100: ");
        scanf("%i", &guess);
        while (guess<min || guess>max){
            printf("Error. Please Enter Another Guess Between 0 and 100: ");
            scanf("%i", &guess);
        }
        if (guess<num) {
            printf("You guessed too low.\n");
        } else if(guess>num){
            printf("You guessed too high.\n");
        } else {
            guessRight = 1;
        }
        numGuess--;
    }
    
    if (guessRight){
        printf("\nCongrats You Got It Right! \n");
    } else {
        printf("\nDummy You Lost. The Number was %i.\n",num);
    }
}

void gameTwo(int num, int numplayers){
    int guess;
    int closest;
    int player;
    
    printf("Player %i please Enter A Guess: ", 1);
    scanf("%i", &guess);
    closest = guess;
    player = 1;
    
    for (int i = 1; i<numplayers; i++){
        printf("Player %i please Enter A Guess: ", i+1);
        scanf("%i", &guess);
        if (abs(num - guess) < abs(closest - guess)){
            closest = guess;
            player = i+1;
        }
    }
    
    printf("Player %i wins! The Number was %i.\n", player,num);
}
