/**************************
*   SIMPLE POINTER        *
*       EXAMPLE           *
***************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    srand(time(NULL));
    int y=1+rand()%99;
    
    // pointer declaration 
    // with initial value
    int *yPtr;
    yPtr=&y;
    
    printf("\nValue at memory position %p:%d",yPtr,*yPtr);
    
    printf("\n\n");
    return 0;
}      