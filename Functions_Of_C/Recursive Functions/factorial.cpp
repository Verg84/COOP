/****************************
    Demonstrates the 
        Factorial Function n!
*****************************/
#include<stdio.h>
#include<stdlib.h>


long factorial(long number);

int main(){
    
    int i; //counter
    
    printf("\t\t***Factorial Function***\n");
    for(i=0;i<=10;i++){
        
        printf("\t*\t%d!=%ld\n",i,factorial(i));
    }
    
    return 0;
    
}

long factorial(long number){
    
    if(number<=1)
        return 1;
    else{
        // recursive step
        return(number*factorial(number-1));
    }
    
}