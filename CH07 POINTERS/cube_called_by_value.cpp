/****************************
****CALL A FUNCTION BY VALUE*
*****************************/

#include<stdio.h>

int cubeByValue(int value);

int main(){
    
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    
    // insert the variable inside the function
    // call by value
    int cube=cubeByValue(number);
    printf("%d^3=%d",number,cube);
    
    printf("\n\n");
    return 0;
}

int cubeByValue(int value){
    
    return value*value*value;
}