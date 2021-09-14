// Multiple - Check if a pair of numbers
//              are multiple together

#include<stdio.h>

int multiple(int a,int b);

int main(){
    
    int a,b;
    
    printf("* Enter first value :");
    scanf("%d",&a);
    printf("* Enter second value :");
    scanf("%d",&b);
    
    if(multiple(a,b))
        printf("\n\t\t * Multiples");
    else
        printf("\n\t\t * Not multiples");
    
    printf("\n\n");
    return 0;
}

int multiple(int a,int b){
    
    if(a%b==0)
        return 1;
    else
        return 0;
    
}