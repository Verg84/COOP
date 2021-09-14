// integerPower function
#include<stdio.h>

int integerPower(int base,int exponent);

int main(){

        int base,exponent;
        
        printf("** Enter a Base value: ");
        scanf("%d",&base);
        printf("** Enter the exponent value :");
        scanf("%d",&exponent);
        
        printf("\t(%d)^%d=%d",base,exponent,integerPower(base,exponent));

        printf("\n");
        printf("\n");
        return 0;
}

int integerPower(int base,int exponent){
    
    int res=1;
    
    for(int i=1;i<=exponent;i++){
            
            res*=base;
    }
    return res;
    
}