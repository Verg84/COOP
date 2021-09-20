/* Give initial values to an array */
#include<stdio.h>

int main(){
    
    int i;      // a counter
    int n[10];   // an array of ten integers
    
    // array with initial values 0
    for(i=0;i<10;i++){
        n[i]=0;
    }
    
    printf("\t\tElement\t\tValue\n");
    
    // export the values of the array
    for(i=0;i<10;i++){
        
        printf("\t\t%d\t\t%d\n",i,n[i]);
    }
    
}