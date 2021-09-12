/***************************
    Return the square 
    of the first 10 numbers
****************************/

#include<stdio.h>

// Function prototypes
int square(int number){
    
    return number*number;
}

int main(void){
    
    
    for(int i=0;i<=10;i++){
        
        printf("%i\t",square(i));
        
    }
    
}