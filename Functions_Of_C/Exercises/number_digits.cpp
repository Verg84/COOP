#include<stdio.h>

int remainder(int a,int b);
int quotient(int a,int b);

int main(){
    
    int number;
    int ten;
    int hundred;
    int thousand;
    int tenThousand;
    
    printf("Enter a value between 1-32767: ");
    scanf("%d",&number);
    
    if(number<32767 && number>=10000){
        
        printf("%d\n",quotient(number,10000));
        number=remainder(number,10000);
        printf("remainder=%d",number);
    }
    
    if(number<9000 && number>=1000){
        
        printf("%d\n",quotient(number,1000));
        number=remainder(number,1000);
        printf("remainder=%d\n",number);
        
    }
    
    
    
    
    
    
    printf("\n\n");
    return 0;
    
}

int remainder(int a,int b){
    
    return a%b;
    
}

int quotient(int a,int b){
    
    return a/b;
    
}