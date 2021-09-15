// Define size using static symbol

#include<stdio.h>

#define SIZE 10 // maximum array size

int main(){
    
    // define array size
    int array[SIZE];
    
    // give initial values
    for(int i=0;i<SIZE;i++){
        
        array[i]=2+2*i;
    }
    
    // Print array values
    printf("ELEMENT\t\tVALUE\n");
    for(int i=0;i<SIZE;i++){
        
        printf("%d\t\t%d\n",i,array[i]);
        
    }
    
    return 0;
    
}