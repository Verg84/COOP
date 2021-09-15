/*******************************
    Greatest Common Divisor
********************************/

#include<stdio.h>

int gcd(int a,int b);

int main(){
    
    int x,y;
    
    // loop for 5 pairs of inputs
    for(int j=1;j<=5;j++){
        
        printf("Enter two integers:");
        scanf("%d%d",&x,&y);
        
        printf("The Greatest Common Divisor of %d,%d:\n",x,y);
        printf("*** %d \n\n",gcd(x,y));
        
    }
    
    printf("\n\n");
    return 0;
    
}

int gcd(int a,int b){
    
    int greatest=1;
    
    // loop from 2 to smaller of x and y
    for(int i=2;i<=((a<b)?a:b);i++){
        
        if(a%i==0 && b%i==0)
            greatest=i;
        
    }
    
    return greatest;
    
}