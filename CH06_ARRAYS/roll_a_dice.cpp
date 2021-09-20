/**********************************
    ROLL A DICE 6000 TIMES
        COUNT THE RESULTS
***********************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROLLS 6000
#define RESULTS 6

int main(){
    
    int dice[ROLLS];
    int results[RESULTS]={0};
    
    // Start rolling
    srand(time(NULL));
    for(int i=0;i<ROLLS;i++){
        
        dice[i]=1+rand()%6;
    }
    
    // Count the reasults
    for(int i=0;i<ROLLS;i++){
        
        ++results[dice[i]];
    }
    
    // Display
    printf("VALUE\t\tFREQUENCY\n");
    for(int i=1;i<=RESULTS;i++){
        printf("%d\t\t%d\n",i,results[i]);
    }
    
    printf("\n\n");
    return 0;
    
}