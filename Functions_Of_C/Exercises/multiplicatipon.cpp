/*****************************
    MULTPLICATION TRIVIA
******************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int numberGenerate();

int main(){
    
    int answer;
    int x,y;
    int points;
    
    srand(time(NULL));
    
    printf("\t\t*** MULTPLICATION TRIVIA GAME ***\n");
    
    for(int i=1;i<=5;i++){
        x=numberGenerate();
        y=numberGenerate();
        
        printf("\n\n\t\t%d) %d * %d=",i,x,y);
        scanf("%d",&answer);
        
        if(answer==x*y){
                printf("\t\tRIGHT");
                points+=10;
        }
        else{
            printf("\t\tWRONG");
            points-=5;
            
        }
        
    }
    
    printf("\n\n\t\tPOINTS:%d",points);
    
    printf("\n\n");
    return 0;
}

int numberGenerate(){
    
    // Generate a number [1-9]
    int number=1+rand()%9;
    
    return number;
    
}