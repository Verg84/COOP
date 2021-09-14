// Show if a number is even

#include<stdio.h>

int showEven(int a);

int main(){
    
    int number;
    
    for(int i=0;i<=10;i++){
        
        printf("\t * Enter a value: ");
        scanf("%d",&number);
        
        if(showEven(number))
            printf("\t***Even***\n");
        else{
            printf("\t***Odd***\n");
        }
        
    }
    
    printf("\n\n");
    return 0;
    
}

int showEven(int a){
    
    if(a%2==0)
        return 1;
    else
        return 0;
    
}