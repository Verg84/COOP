/********************************
    CALL A FUNCTION BY REFERENCE*
*********************************/

#include<stdio.h>

void cubeByReference(int *pointer); // must be called with an adress(&) - call by reference

int main(){
    
        int number;
        printf("Enter a number:");
        scanf("%d",&number);
        
        printf("The original number is:%d",number);
        
        // call by reference - insert the adress of the variable number
        cubeByReference(&number);
        printf("\nThe new value now is:%d",number);
        
        printf("\n\n");
        return 0;
    
}

void cubeByReference(int *pointer){
    
    *pointer=*pointer * *pointer * *pointer;
}