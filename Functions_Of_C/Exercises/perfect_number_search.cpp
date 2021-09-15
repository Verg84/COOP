#include<stdio.h>
#include<math.h>

int prime(int number);

int main(){
    
       
    int count=0; // totqal prime numbers
    printf("\t\t Prime Numbers From 1 to 1000 :\n");
    for(int j=1;j<=1000;j++){
        if(prime(j)){
            ++count;
            printf("%5d",j);
            
            if(count%10==0){
                
                printf("\n");
            }
            
        }
    }
}

int prime(int number){
    
   
    
    for(int i=2;i<=(int)sqrt(number);i++){
        
        
        if(number%i==0){
            
            return 0;
            
        }
        
    }
    return 1;
    
}