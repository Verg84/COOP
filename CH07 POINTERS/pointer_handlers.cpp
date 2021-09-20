/*********************
    USING * and & 
    POINTER HANDLERS
*********************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    srand(time(NULL));
    
    int a; // integer declaration
    
    int *aPtr;   // pointer to integer declaration
    
    a=1+rand()%99;
    
    aPtr=&a;
    
    // display the memory adresses
    printf("*** The adress of a is:%p\nThe adress of aPtr is:%p\n",&a,*aPtr);
    printf("\n*** The value of a is:%d\nThe value that aPtr points is:%d\n",a,*aPtr);
    
    // * and & are complement
    printf("\n* and & are complement:\n");
    printf("&*aPtr=%p\n*&aPtr=%p",&*aPtr,*&aPtr);
    
    printf("\n\n");
    return 0;
}