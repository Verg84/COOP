/***************************
    Print the maximum
    of three numbers 
    given by the user
****************************/

#include<stdio.h>

// Function prototypes
int maximum(int x,int y,int z);

int main(){
    
    int num1,num2,num3;
    
    printf("\t\t***MAXIMUM NUMBER***\n");
    printf("\t\tEnter three integers: ");
    scanf("\t\t%d\t\t%d\t\t%d",&num1,&num2,&num3);
    
    printf("\n\t\t***The biggest is: %d\n",maximum(num1,num2,num3));
    
    return 0;
    
    
}

int maximum(int x,int y,int z){
    
    int max;
    max=x;
    if(y>max){
        max=y;
    }
    if(z>max){
        max=z;
    }
    return max;
    
}
    
 