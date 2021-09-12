/************************************
    The Fibonnaci Function,
        creates series of numbers
        that represent a spiral shape
        
*************************************/

#include<stdio.h>

long fibonacci(long n);

int main(){

    long result;    // Fibinacci value
    int number;    // User value
    
    printf("\t\t***FIBONACCI***\n\n");
    printf("\t\t*Enter a value:");
    scanf("%d",&number);
    result=fibonacci(number);
    printf("\t\t*Fibonacci(%d)=%ld\n",number,result);
   
    return 0;
    
}

long fibonacci(long n){
    
    if(n==0||n==1){
        
        return n;
    }
    else{
        
        return fibonacci(n-1)+fibonacci(n-2);
        
    }
    
   
}