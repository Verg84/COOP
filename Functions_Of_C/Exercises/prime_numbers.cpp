// Find if the number is prime

#include<stdio.h>

int main(){
    
    int divisors=0;
    int number=0;
    
    
    printf("Enter a number :");
    scanf("%d",&number);
    
    for(int i=2;i<=number-1;i++)
    {
        
        printf("\n*%d:",i);
        
        if(number%i==0){
            printf("%d is a divisor",i);
            ++divisors;
        }
        if(number%i!=0){
            printf("%d is not a divisor",i);                      
        
    }
    
   }
   
   if(divisors>0){
       
       printf("\n\n%d is a not a Prime number.",number);
   }
   else{
       
       printf("\n\n%d is Prime number.",number);
       
   }
    
    printf("\n\n");
    return 0;
}