// Reverse a number

#include<stdio.h>

int reverseNumber(int number);

int main(){
    
    int n;
    
    printf("Enter a number 1-9999 :");
    scanf("%d",&n);
    
    printf("\n\nThe reversed:%d",reverseNumber(n));
    
    printf("\n\n");
    return 0;
}

int reverseNumber(int number){
    
    // the reversed number
    int reverse=0;
    // the current multiplier
    int multiplier=1;
    // the current divisor
    int divisor=1000;
    
    // while single digit
    while(number>9){
        
        if(number>=divisor){
            // take the first digit
            reverse+=number/divisor*multiplier;
            number%=divisor;
            
            // update the divisor
            divisor/=10;
            multiplier*=10;
        }
        else{
            divisor/=10;
        }
        
    }
    reverse+=number*multiplier;
    
    return reverse;
    
}