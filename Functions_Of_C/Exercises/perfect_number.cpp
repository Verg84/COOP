// Perfect Numbers

#include<stdio.h>

void perfect(int number);

int main(){
    
    int value;
    
    printf("\t\t\t*** PERFECT NUMBERS ***\n\n");
    printf("\t *** Enter A number ");
    scanf("%d",&value);
    perfect(value);
    
    printf("\n\n");
    return 0;
    
}

void perfect(int number){
    
    for(int a=1;a<=1000;a++){
        for(int b=1;b<=1000;b++){
            
            if(a%number==0 && b%number==0 && (a+b+1)==1 ){
                
                printf("\n\t\t *** (1+%d+%d)=%d",a,b,number);
                
            }
            
        }
    }
    
    printf("\nEnd\n");
}