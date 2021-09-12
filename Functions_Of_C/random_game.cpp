/************************
    Game of Random:
*************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Game Status
enum Status{CONTINUE,WON,LOST};

// Function prototypes
int rollDice(void);

int main(){
    
    int sum; // Result of the sum of dices
    int score; // Player points gathered
    int pressed;
    
    enum Status gameStatus;
    
    // seed with the current time
    srand(time(NULL));
    
    // Start rollDice
    printf("Press Any Button To Roll");
    scanf("%d",&pressed);
    if(pressed)
        sum=rollDice();
    
    // According the result
    switch(sum){
        
        case 7:
        case 11:
            gameStatus=WON;
            break;
        
        case 2:
        case 3:
        case 12:
            gameStatus=LOST;
            break;
        
        default: // keep the score
            score=sum;
            printf("\n\t***Points:%d***\n",score);
            break;
        
    }
    printf("Press Any Button to Continue Rolling");
    scanf("%d",&pressed);
    
    while(gameStatus==CONTINUE && pressed){
        printf("Press Any Button to Continue Rolling");
        sum=rollDice();
        
        if(sum==score)
            gameStatus=WON;
        else{
            
            if(sum==7)
                gameStatus=LOST;
        }
    }
    
    if(gameStatus==WON){
        
        printf("\t\tThen Rolled a %d",sum);
        printf("\n***WINNER***\n");
    }
    else
    {
        printf("\t\tThen Rolled a %d",sum);
        printf("\n***GAME OVER***\n");
    }
    
    return 0;
    
    
}

int rollDice(){
    
    int dice1,dice2;
    int workSum=0;
    
    dice1=1+rand()%5;
    dice2=1+rand()%5;
    workSum=dice1+dice2;
    
    printf("\t\t***Player rolled %d+%d=%d\n",dice1,dice2,workSum);
    
    return workSum;
    
    
}