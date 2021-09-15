/***********************************
    HEADS and TAILS
************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip();

int main(){
    
    int heads=0;
    int tails=0;
    
    srand(time(NULL));
    
    for(int i=1;i<=100;i++){
            
            if(flip()==0){
                tails++;
               
            }
            else{
                heads++;
            }
            
            if(i%10==0)
                printf("\n");
            
        }
    printf("\n\n\t\t Heads:%d,Tails:%d",heads,tails);
    
    printf("\n\n");
    return 0;
    
}

int flip(){
    
    int result;
    
    // random number generation from 0 to 1
    result=rand()%2;
    
    if(result==0){
        printf("Tails ");
        
    }
    else{
        printf("Heads ");
    }
    
    return result;
    
    
         
}