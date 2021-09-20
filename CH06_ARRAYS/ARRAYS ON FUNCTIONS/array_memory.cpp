// The name of an array
// is equal: array[x]=&array[0]

#include<stdio.h>

int main(){
    
    // define an array of size 5
    char array[5];
    
    printf("array=%p\n&array[0]=%p\n&array=%p\n",array,&array[0],&array);
    
    printf("\n\n");
    return 0;
    
    
}