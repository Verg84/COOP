/****************************
    GUESS THE NUMBER GAME
*****************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void guessGame();

int main(){
    printf("\t\t *** GUESS MY NUMBER ***\n");
    srand(time(NULL));
    guessGame();
    
    printf("\n\n");
    return 0;
    
}

void guessGame(){
    
    int x;        // generated number
    int guess;    // user's guess
    int response; // play again?->1.yes,2.no
    
    // loop until user types 2 to exit
    do{
        // generate a number [1-1000],
       //1 is shift,1000 the scaling factor
        x=1+rand()%1000;
        printf("\nI have a number between 1 and 1000!\n");
        printf("\nCan you guess it ? :");
        scanf("%d",&guess);
        
        while(guess!=x){
            if(guess<x){
                printf("Too low. Try again:\n");
            }
            else{
                printf("Too hight. Try again:\n");
            }
            scanf("%d",&guess);
        }
        
        // Prompt for another game
        printf("\nExcellent!!!You guessed the right number!\n");
        printf("Play Again(1.=yes,2.=no)?");
        scanf("%d",&response);
    }while(response==1);
}